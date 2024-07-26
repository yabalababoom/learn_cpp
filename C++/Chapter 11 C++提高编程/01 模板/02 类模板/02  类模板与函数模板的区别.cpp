
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// 类模板与函数模板区别主要有两点:
// 1.类模板没有自动类型推导的使用方式
// 2.类模板在模板参数列表中可以有默认参数

//类模板
template<class NameType, class AgeType = int> //2.模板参数列表<>内可以有默认参数
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

//1.类模板没有自动类型推导的使用方式
void test01()
{
    // Person p1("jim", 17);// error: missing template arguments before 'p1'
    Person<string, int> p1("jim", 17); //只能显示指定类型
    p1.showInfo();
}

// 2.类模板在模板参数列表中可以有默认参数
void test02()
{
    Person<string> p1("bob", 17); 
    p1.showInfo();
}

int main(int argc, char const *argv[])
{
    test01();
    test02();
    return 0;
}




