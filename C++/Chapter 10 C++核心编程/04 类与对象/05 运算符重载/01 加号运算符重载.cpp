#include <iostream>
#include <string>
#include <ctime>
using namespace std;

//4.5运算符重载
// 运算符重载概念:对已有的运算符重新进行定义,赋予其另一种功能,以适应不同的数据类型

// 4.5.1加号运算符重载
// 作用:实现两个"自定义数据类型"相加的运算


/*
总结1:对于内置的数据类型的表达式的运算符是不可能改变的
总结2:不要滥用运算符重载
*/

class Person
{
public:
    int m_A;
    int m_B;
    // 1. 通过成员函数重载+
    // Person operator+(Person &p)
    // {
    //     Person tmp;
    //     tmp.m_A = this->m_A + p.m_A;
    //     tmp.m_B = this->m_B + p.m_B;
    //     return tmp;
    // }
};


// 2. 通过全部函数重载+
Person operator+(Person &p1, Person &p2)
{
    Person tmp;
    tmp.m_A = p1.m_A + p2.m_A;
    tmp.m_B = p1.m_B + p2.m_B;
    return tmp;
}
//运算符重载 也可以发生函数重载
Person operator+(Person &p1, int num)
{
    Person tmp;
    tmp.m_A = p1.m_A + num;
    tmp.m_B = p1.m_B + num;
    return tmp;
}

void test01()
{
    Person p1;
    p1.m_A = 10;
    p1.m_B = 10;
    Person p2;
    p2.m_A = 10;
    p2.m_B = 10;

    
    //1. 成员函数重载+的本质调用
    // Person p3 = p1.operator+(p2);
    //2. 全部函数重载+的本质调用
    // Person p3 = operator+(p1,p2);

    // 3. 简化调用
    // Person p3 = p1 + p2;
    // cout << "p3 m_A: " << p3.m_A << endl;
    // cout << "p3 m_B: " << p3.m_B << endl;


    // 运算符重载 也可以发生函数重载
    Person p4 = p1 + 1000;

    cout << "p4 m_A: " << p4.m_A << endl;
    cout << "p4 m_B: " << p4.m_B << endl;
}

int main(int argc, char const *argv[])
{
    test01();
    return 0;
}

