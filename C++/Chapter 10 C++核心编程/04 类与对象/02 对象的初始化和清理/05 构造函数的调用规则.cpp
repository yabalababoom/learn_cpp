#include <iostream>
#include <string>
#include <ctime>
using namespace std;
/*
4.2.4构造函数调用规则
    默认情况下,C++编泽器至少给一个类添加3个函数
        1.默认构造函数(无参,函数体为空)
        2,默以析构函数(无参,函数体为空)
        3,默认拷贝构造函数,对属性进行值拷贝
    构造函数调用规则如下:
        ·如果用户定义有参构造函数,C++不在提供默认无参构造,但是会提供默认拷贝构造
        ·如果用户定义拷贝构造函数,C++不会再提供其他构造函数
*/

class Person
{
private:
    /* data */
public:
    int m_Age;

    // Person()
    // {
    //     cout << "Person 默认(无参)构造函数的调用" << endl;
    // };
    // Person (int age)
    // {
    //     cout << "Person 有参构造函数的调用" << endl;
    //     m_Age = age;
    // }
    Person( const Person &p )
    {
        m_Age = p.m_Age;
        cout << "Person 拷贝构造函数的调用" << endl;
    }
    ~Person()
    {
        cout << "Person 析构函数的调用" << endl;
    };
};

// void test01()
// {
//     Person p; //Person 默认(无参)构造函数的调用
//     p.m_Age = 18; 
//     Person p2(p); //Person 拷贝构造函数的调用
//     cout << "age of p2:" << p2.m_Age << endl; //age of p2:18 

//     // 注释用户写的拷贝构造函数后,编译器仍然会有默认拷贝构造函数,对属性进行值拷贝,因此 age of p2:18 
// }

//·如果用户定义有参构造函数,C++不在提供默认无参构造,但是会提供默认拷贝构造
void test02()
{
    
    // Person p;//注释默认(无参)构造函数的调用,  会报错

    Person p1(28); // 调用有参构造函数
    Person p2(p1); //调用拷贝构造函数
    cout << "age of p2:" << p2.m_Age << endl;
}

//  ·如果用户定义拷贝构造函数,C++不会再提供其他构造函数
void test03()
{
    //只有拷贝构造函数的情况下
    // Person p; //报错
    // Person p(18); //报错
}


int main(int argc, char const *argv[])
{
    // test01();
    test02();
    return 0;
}
