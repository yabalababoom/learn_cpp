#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// 作用:重载关系运算符,可以让两个自定义类型对象进行对比操作
class Person
{
private:
    /* data */
public:
    string m_Name;
    int m_Age;
    Person(string name, int age)
    {
        m_Name = name;
        m_Age = age;
    }

    //重载关系运算符==
    bool  operator==(Person &p)
    {
        if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
        {
            return true;
        }
        return false;
    }
    //重载关系运算符!=
    bool  operator!=(Person &p)
    {
        if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
        {
            return false;
        }
        return true;
    }
};






void test01()
{
    Person p1("tom", 12);
    Person p2("tom", 22);
    if (p1 == p2)
    {
        cout << "p1 == p2" << endl;
    }
    else
    {
        cout << "p1 != p2" << endl;
    }

    if (p1 != p2)
    {
        cout << "p1 != p2" << endl;
    }
    else
    {
        cout << "p1 == p2" << endl;
    }
    
}

int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
