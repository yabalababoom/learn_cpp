#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// 问题:当子类与父类出现同名的成员,如何通过子类对象,访问到子类或父类中同名的数据呢?
// 1.访问子类同名成员 直接访问即可
// 2.访问父类同名成员 需要加作用域
// 3.当子类与父类拥有同名的成员函数,子类会隐藏父类中同名成员函数,加作用域可以访问到父类中同名函数


class Base
{
public:
    Base()
    {
        m_A = 100;
    }
    void func()
    {
        cout << "Base - func() called" << endl;
    }
    void func(int a)
    {
        cout << "Base - func(int a) called" << endl;
    }
    int m_A;
};

class Son : public Base
{
public:
    Son()
    {
        m_A = 200;
    }
    void func()
    {
        cout << "Son - func() called" << endl;
    }
    int m_A;
};


void test01()
{
    Son s;
    //同名成员属性访问
    cout << "Son m_A = " << s.m_A << endl;    // Son m_A = 200
    //通过子类对象访问父类中的同名成员属性,需要加作用域
    cout << "Base m_A = " << s.Base::m_A << endl; //Base m_A = 100
}


void test02()
{
    Son s;
    s.func();
    //通过子类对象访问父类中的同名成员函数,需要加作用域
    s.Base::func();
    // 如果子类中出现和父类同名的成员函数,子类的同名成员会隐藏掉父类中所有同名成员函数
    s.Base::func(100);
}
int main(int argc, char const *argv[])
{
    // test01();
    test02();
    return 0;
}
