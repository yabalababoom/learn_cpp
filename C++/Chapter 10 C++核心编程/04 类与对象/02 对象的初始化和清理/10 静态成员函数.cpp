#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// 2.静态成员函数
//     2.1 所有对象共享同一个函数, 也就是不属于单独的对象,可以通过类名进行访问
//     2.2 静态成员函数只能访问静态成员变量,非静态成员变量属于特定的对象,无法区分属于哪个对象,因此必须通过对象进行访问


class Person
{
private:
// 静态成员函数也是有访问权限的
    static void func2()
    {
    cout << "static void func2() called"<< endl;
    }
public:
    static int m_A; //静态成员变量
    int m_B; //非静态成员变量
    static void func() //静态成员函数
    {
        m_A = 1000; //静态成员函数只能访问静态成员变量
        // m_B = 1000; //不能访问非静态成员变量, 非静态成员变量属于特定的对象,无法区分属于哪个对象,因此必须通过对象进行访问
        // error: invalid use of member 'Person::m_B' in static member function,
        cout << "static void func() called"<< endl;
    }
};

int Person::m_A = 0; //类外初始化



void test01()
{
    //1、通过对象进行访问
    Person p;
    p.func();

    //2、通过类名进行访问
    Person::func();
    // Person::func2(); //error: 'static void Person::func2()' is private within this context
}




int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
