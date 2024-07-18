#include <iostream>
#include <string>
#include <ctime>
using namespace std;

/*
作用: C++提供了初始化列表语法,用来初始化属性
语法: 构造函数():属性1(值1),属性2(值2)··{}
*/

class Person
{
public:
    //传统初始化操作
    // Person(int a, int b,int c) //有参构造函数
    // {
    //     m_A = a;
    //     m_B = b;
    //     m_C = c;
    // }

    //初始化列表初始化属性 法1: 写死了
    Person() : m_A(10), m_B(20),m_C(30)  //有参构造函数
    {
    }
    //初始化列表初始化属性 法2: 更加灵活
    Person(int a, int b,int c) : m_A(a), m_B(b),m_C(c)  //有参构造函数
    {
    }
    
    int m_A;
    int m_B;
    int m_C;


};



void test01()
{
    // Person p(10, 20, 30);
    Person p(30,20,51);
    cout << p.m_A << endl;
    cout << p.m_B << endl;
    cout << p.m_C << endl;
}






int main(int argc, char const *argv[])
{
    test01();
    return 0;
}

