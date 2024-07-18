#include <iostream>
#include <string>
#include <ctime>
using namespace std;

/*
4.3.4 const修饰成员函数
    常函数:
        ·成员函数后加const后我们称为这个函数为常函数
        ·常函数内不可以修改成员属性
        ·成员属性声明时加关键字mutable后,在常函数中依然可以修改
    常对象:
        ·声明对象前加const称该对象为常对象
        ·常对象只能调用常函数
*/

class Person
{
public:
    int m_A = 0;
    mutable int m_B = 0; //加上mutable关键字, 是特殊变量, 即使在常函数中,也能修改这个值

    // this 本质是指针常量;指向不可修改,指向的值可以修改, 本质是这行代码Person * const this;
    // void showPerson() const  等价于 const Person * const this, 也就是const 既修饰指针, 又修饰常量
    void showPerson() const    //这个就是常函数
    {
        // m_A = 100; //相当于 this->m_A = 100; 不允许修改
        this->m_B = 100;
        cout << "m_B is: " << this->m_B << endl;
    }
    void func()
    {
        m_A = 100;
    }
};

void test01()
{
    Person p;
    p.showPerson();
}


//常对象
void test02()
{
    const Person p; //声明对象前加const称该对象为常对象
    // p.m_A = 100;
    p.m_B = 100; //m_B是特殊值,在常对象下也可以修改
    p.showPerson(); // 常对象只能调用常函数
    // 常对象不可以调用普通成员函数,因为普通成员函数可以修改属性
}


int main(int argc, char const *argv[])
{
    // test01();
    test02();
    return 0;
}








