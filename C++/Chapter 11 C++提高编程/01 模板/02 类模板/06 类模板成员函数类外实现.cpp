#include <iostream>
#include <string>
#include <ctime>
using namespace std;

//学习目标:能够掌握类模板中的成员函数类外实现



template <class T1, class T2>
class Person
{
public:
    T1 m_Name;
    T2 m_Age;
    Person(T1 name, T2 age);
    // {
    //     this->m_Name = name;
    //     this->m_Age = age;
    // }
    void showInfo();
    // {
    //     cout << "name: " << this->m_Name << " age: " << this->m_Age << endl  ;
    // }
};

//构造函数的类外实现
template <class T1, class T2>
Person<T1,T2>::Person(T1 name, T2 age)
{
    this->m_Name = name;
    this->m_Age = age;
}

//成员函数的类外实现
template <class T1, class T2>
void Person<T1,T2>::showInfo()
{
    cout << "name: " << this->m_Name << " age: " << this->m_Age << endl  ;
}


void test01()
{
    Person<string, int> p("JIM", 24);
    p.showInfo();
}

int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
