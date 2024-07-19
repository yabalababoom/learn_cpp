#include <iostream>
#include <string>
#include <ctime>
using namespace std;

/*问题:继承中同名的静态成员在子类对象上如何进行访问?

静态成员和非静态成员出现同名,处理方式一致

    1.访问子类同名成员直接访问即可
    2.访问父类同名成员需要加作用域

*/


// 总结:同名静态成员处理方式和非静态处理方式一样,只不过有两种访问的方式(通过对橡和通过类名)


/*
静态成员就是在成员变量和成员函数前加上关键字static,称为静态成员

静态成员分为:
    1.静态成员变量
        1.1 所有对象共享同一份数据
        1.2 在编译阶段分配内存(程序运行前就分配到全局区了)
        1.3 类内声明,类外初始化(必须有初始值)
    2.静态成员函数
        2.1 所有对象共享同一个函数
        2.2 静态成员函数只能访问静态成员变量

*/

class Base
{
public:
    static int m_A;
    static void func()
    {
        cout << "Base -> static void func() called" << endl;
    }
    static void func(int)
    {
        cout << "Base -> static void func(int) called" << endl;
    }
};

int Base::m_A = 100;

class Son : public Base
{
public:
    static int m_A;
    static void func()
    {
        cout << "Son -> static void func() called" << endl;
    }
};
int Son::m_A = 200;


//同名静态成员属性
void test01()
{
    Son s;
    //通过对象访问静态成员属性
    cout << "Son m_A = " << s.m_A << endl; //Son m_A = 200
    cout << "Base m_A = " << s.Base::m_A << endl; //Base m_A = 100
    //通过类名访问
    cout << "Son m_A = " << Son::m_A << endl; //Son m_A = 200
    cout << "Base m_A = " << Base::m_A << endl; //Base m_A = 100
    //第一个:: 代表通过类名访问, 第二个::代表访问父类作用域下的属性
    cout << "Base m_A = " << Son::Base::m_A << endl;//Base m_A = 100

}

//同名静态成员函数
void test02()
{
    Son s;
    //通过对象访问静态成员函数
    s.func();
    s.Base::func();
    cout << "----------------" << endl;
    //通过类名访问
    Son::func();
    Son::Base::func();
    //子类出现和父类同名静态成员函数,也会隐藏父类中所有同名成员函数
    //如果想访问父类中被隐藏同名成员,需要加作用域
    Son::Base::func(1000);

}



int main(int argc, char const *argv[])
{
    // test01();
    test02();
    return 0;
}


