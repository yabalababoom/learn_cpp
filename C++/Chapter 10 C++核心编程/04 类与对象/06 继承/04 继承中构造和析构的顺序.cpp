#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// 子类继承父类后,当创建子类对象,也会调用父类的构造函数

// 问题:父类和子类的构造和析构顺序是准先谁后?
//继承中的构造和析构顺序如下:先构造父类,再构造子类,析构的顺序与构造的顺序相反

class Base
{
public:
    Base(/* args */)
    {
        cout << "Base 构造函数被调用" << endl;
    }
    ~Base()
    {
        cout << "Base 析构函数被调用" << endl;
    }
};

class Son : public Base
{
public:
    Son()
    {
        cout << "Son 构造函数被调用" << endl;
    }
    ~Son()
    {
        cout << "Son 析构函数被调用" << endl;
    }
};

void test01()
{
    // Base b;
    Son s1;
    /*
    Base 构造函数被调用
    Son 构造函数被调用
    Son 析构函数被调用
    Base 析构函数被调用
    */
}

int main(int argc, char const *argv[])
{
    
    test01();
    return 0;
}
