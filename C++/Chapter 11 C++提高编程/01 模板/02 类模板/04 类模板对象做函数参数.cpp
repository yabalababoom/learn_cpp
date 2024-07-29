#include <iostream>
#include <string>
#include <ctime>
using namespace std;
/*
学习目标:
    ·类模板实例化出的对象,向函数传参的方式

一共有三种传入方式:
    1.指定传入的类型    直接显示对象的数据类型 (最常用)
    2.参数模板化        将对象中的参数变为模板进行传递
    3.整个类模板化      将这个对象类型模板化进行传递

*/

template<class T1,class T2>
class Person
{
public:
    T1 m_Name;
    T2 m_Age;
    Person(T1 name, T2 age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }
    void showInfo()
    {
        cout << "name: " << this->m_Name << " age: " << this->m_Age << endl  ;
    }

};



// 1.指定传入的类型    直接显示对象的数据类型
void printPerson1(Person<string, int>&p) //引用的方式传入
{
    p.showInfo();
}
void test01()
{
    Person<string, int> p("jim",15);
    printPerson1(p);
}


// 2.参数模板化        将对象中的参数变为模板进行传递
template<class T1, class T2>
void printPerson2(Person<T1, T2>&p) 
{
    p.showInfo();
    cout << "typeof T1: " << typeid(T1).name() << endl;
    cout << "typeof T2: " << typeid(T2).name() << endl;
}
void test02()
{
    Person<string, int> p("Bob",25);
    printPerson2(p);
}


// 3.整个类模板化      将这个对象类型模板化进行传递
template<class T>
void printPerson3(T &p) 
{
    p.showInfo();
    cout << "typeof T: " << typeid(T).name() << endl; //typeof T: 6PersonINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiE
}
void test03()
{
    Person<string, int> p("Jack",45);
    printPerson3(p);
}


int main(int argc, char const *argv[])
{
    // test01();
    // test02();
    test03();
    return 0;
}

