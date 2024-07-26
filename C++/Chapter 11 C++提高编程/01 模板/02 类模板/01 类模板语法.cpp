#include <iostream>
#include <string>
#include <ctime>
using namespace std;

/*
类模板作用:
    .建立一个通角类,类中的成员数据类型可以不具体制定,用一个虚拟的类型来代表.

语法:
    template<typename T>
    类

解释:
template    声明创建模板
typename    表面其后面的符号是一种数据类型,可以用class代替
T           通用的数据类型,名称可以替换,通常为大写字母
*/


//总结:类模板和函数模板语法相似,在声明模板template后面加类,此类称为类模板

//类模板
template<class NameType, class AgeType>
class Person
{
public:
    NameType m_Name;
    AgeType m_Age;
    Person(string name, int age)
    {
        this->m_Age = age;
        this->m_Name = name;
    }

    void showInfo()
    {
        cout << "name= " << m_Name << " age= " << m_Age << endl;
    }
};


void test01()
{
    Person<string, int> p1("jim", 16);
    p1.showInfo();
}


int main(int argc, char const *argv[])
{
    test01();
    return 0;
}



