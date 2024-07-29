
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

/*
学习目标:
·掌握类模板配合友元函数的类内和类外实现

全局函数类内实现·直接在类内声明友元即可(推荐)
全局函数类外实现·需要提前让编译器知道全局函数的存在
*/


template <class T1, class T2>
class Person;

//2.全局函数 类外实现
template<class T1,class T2>
void printInfo2(Person<T1, T2> p)
{
    cout << "类外实现   name: " << p.m_Name << " age: " << p.m_Age << endl  ;
}

template <class T1, class T2>
class Person
{
    //全局函数 类内实现
    friend  void printInfo(Person<T1, T2> p)
    {
        cout << "name: " << p.m_Name << " age: " << p.m_Age << endl  ;
    }
    //全局函数 类外实现
    //加空模板参数列表
    //需要提前让编译器知道这个全局函数的存在,放在代码最前面
    friend void printInfo2<>(Person<T1, T2> p);


private:
    T1 m_Name;
    T2 m_Age;
public:
    Person(T1 name, T2 age){
        this->m_Name = name;
        this->m_Age = age;
    }
};



 //1.全局函数 类内实现
void test01()
{
    Person<string, int> p("kim", 20);
    printInfo(p);
}



void test02()
{
    Person<string, int> p("oppo", 20);
    printInfo2(p);
}



int main(int argc, char const *argv[])
{
    // test01();
    test02();
    return 0;
}