#include <iostream>
#include <string>
#include <ctime>
using namespace std;

/*
4.2.8静态成员
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

class Person
{
//静态成员变量也是有访问权限的
private:
    static int m_B;


public:
    //类内声明
    static int m_A;
};

//类外初始化
int Person::m_A = 100;
int Person::m_B = 200;

void test01()
{
    Person p1;
    cout << "p1 m_A: "<<p1.m_A << endl; //p1 m_A: 100

    Person p2;
    p2.m_A = 200;
    cout << "p1 m_A: "<<p1.m_A << endl; //p1 m_A: 200
    cout << "p2 m_A: "<<p2.m_A << endl; //p2 m_A: 200  (所有对象共享同一份数据)
}

void test02()
{
    //静态成员变量不属于某个对象上，所有对象都共享同一份数据
    //因此静态成员变量有两种访问方式

    //1、通过对象进行访问
    Person p;
    cout << "p m_A: "<<p.m_A << endl; //p m_A: 100
    
    //2、通过类名进行访问
    cout << "Person::m_A: "<<Person::m_A << endl; //Person::m_A: 100
    // cout << "Person::m_B: "<<Person::m_B << endl; //error: 'int Person::m_B' is private within this context

}


int main(int argc, char const *argv[])
{

    // test01();
    test02();
    return 0;
}
