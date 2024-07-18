#include <iostream>
#include <string>
#include <ctime>
using namespace std;
/*
4.3.2this指针概念
通过4.3.1我们知道在C++中成员变量和成员函数是分开存储的
每一个非静态成员函数只会诞生一份函数实例,也就是说多个同类型的对象会共用一块代码
那么问题是:这一块代码是如何区分那个对象调用自己的呢?


C++通过提供特殊的对象指针,this指针,解决上述问题. "this指针指向被调用的成员函数所属的对象"


this指针是隐含每一个非静态成员函数内的一种指针
this指针不需要定义,直接使用即可


this指针的用途:
    ·当形参和成员变量同名时,可用this指针来区分  (解决名称冲突)
    ·在类的非静态成员函数中返回对象本身,可使用return *this  (返回对象本身用*this)
*/


class Person
{
private:
    
public:
    int age;
    //1. 解决名称冲突
    Person(int age)
    {
        this->age = age; //this指向被调用的成员函数所属的对象, 就是对象p1
        cout << "构造函数中的int &age:" << &age << endl; //构造函数中的int &age:0x61fddc
        cout << "构造函数中的 this:" << this << endl; //构造函数中的 this:0x61fdd8
    }
    void showInfo()
    {
        cout << "成员函数中调用的int &age:" << &age << endl; //成员函数中调用的int &age:0x61fdd8
    }

    Person& PersonAddAge(Person &p) //如果不加&符号,返回的是一个拷贝后的新对象,每次调用都返回一个新的对象
    {
        this->age += p.age;

        //this指向p2的指针,而*this指向的就是p2这个对象本体
        return *this;
    }

};


void test01()
{
    Person p1(18);
    p1.showInfo();
    cout << "age of p1:" << p1.age << endl; // age of p1:0
    cout << "age of &p1.age:" << &p1.age << endl; //age of &p1.age:0x61fdd8
}

//返回对象本身用*this
void test02()
{
    Person p1(10);
    Person p2(10);
    
    

    p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1); //链式编程思想

    cout << "age of p1.age: " << p1.age << endl; //age of p1.age: 10
    cout << "age of p2.age: " << p2.age << endl; //age of p2.age: 30
    cout << "age of &p1.age: " << &p1.age << endl; //age of &p1.age: 0x61fdc0
    cout << "age of &p2.age: " << &p2.age << endl; //age of &p2.age: 0x61fdc4
}



int main(int argc, char const *argv[])
{
    // test01();
    test02();
    return 0;
}



















