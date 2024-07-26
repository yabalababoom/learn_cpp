
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

//模板的通用性并不是万能的, 有些特定数据类型,需要用具体化方式做特殊实现

/*
总结:
    ·利用具体化的模板,可以解决自定义类型的通用化
    ·学习模板并不是为了写模板,而是在STL能够运用系统提供的模板
*/


class Person
{

public:
    string m_Name;
    int m_Age;
    Person(string name, int age)
    {
        m_Age = age;
        m_Name = name;
    }

};






//对比两个数据是否相等
template<class T>
bool  myCompare(T &a, T &b)
{
    if (a==b)
    {
        return true;
    }
    else
    {
        return false;
    }    
}

void test01()
{
    int a = 10;
    int b = 20;
    bool res = myCompare(a, b);
    if (res)
    {
        cout << "equal" << endl;
    }
    else
    {
        cout << "not equal" << endl;
    }
}

//利用具体化Person的版本实现代码,具体化优先调用
template<> bool  myCompare(Person &pa, Person &pb) //其实就是函数重载
{
    if (pa.m_Name == pb.m_Name && pa.m_Age == pb.m_Age)
    {
        return true;
    }
    else
    {
        return false;
    }    
    
}

void test02()
{
    Person p1("tom", 10);
    Person p2("tom", 100);
    bool ret = myCompare(p1, p2);

    if (ret)
    {
        cout << "equal" << endl;
    }
    else
    {
        cout << "not equal" << endl;
    }

}

int main(int argc, char const *argv[])
{
    // test01();
    test02();
    return 0;
}



