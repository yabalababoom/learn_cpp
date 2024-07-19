#include <iostream>
#include <string>
#include <ctime>
using namespace std;
/*
4.5.2左移运算符重载
作用:可以输出自定义数据类型
*/

class Person
{
    friend ostream & operator<<(ostream &mycout, Person &p);

private:
    int m_A;
    int m_B;
public:
    Person(int a, int b)
    {
        m_A = a;
        m_B = b;
    }
    

    //通常不会利用成员函数重载<<运算符 ,因为无法实现cout在<<在左侧

};



//只能利用全局函数重载<<运算符

//cout 属于ostream类的一个对象
ostream & operator<<(ostream &mycout, Person &p) // 本质 operator<<(cout,p) 简化 cout<<p; //利用引用取别名
{
    mycout << "m_A = " << p.m_A << "; m_B = " << p.m_B ; //返回cout,链式编程
    return mycout;
}

void test01()
{
    Person p(10,10);
    cout << p << " hello world"<< endl  ;
}

int main(int argc, char const *argv[])
{
    test01();
    // system("pause");
    return 0;
}


