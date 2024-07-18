#include <iostream>
#include <string>
#include <ctime>
using namespace std;
/*
4.3.3空指针访问成员函数
    C++中空指针也是可以调用成员函数的,但是也要注意有没有用到this指针
    如果用到ths指针,需要加以判断保证代码的健壮性
*/

class Person
{

public:
    int m_Age;

    void showClassName()
    {
        cout << "this is Person class" << endl;
    }

    void showPersonAge()
    {
        cout << "this is : "<< this << endl;
        //防止传入空指针而报错
        if (this == NULL) 
        {
            return;
        }
        cout << "Person age is : "<< this->m_Age << endl; //m_Age 默认添加了this->
    }

};

void test01()
{
    Person *p = NULL; //创建Person 类的指针指向空
    cout << "p is : "<< p << endl;
    p->showClassName();
    p->showPersonAge();
}


int main(int argc, char const *argv[])
{
    test01();
    return 0;
}

