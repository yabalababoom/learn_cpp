#include <iostream>
#include <string>
#include <ctime>
using namespace std;


//类模板中成员函数创建时机?
//类模板中成员函数在调用时才去创建

//总结:类模板中的成员函数并不是一开始就创建的,在调用时才去创建
class Person1
{
public:
    void showInfo1()
    {
        cout << "show person1" << endl;
    }
};

class Person2
{
public:
    void showInfo2()
    {
        cout << "show person2" << endl;
    }
};

template <class T>
class MyClass
{
public:
    T obj;
    //类模板中的成员函数
    void func1()
    {
        obj.showInfo1();
    }
    void func2()
    {
        obj.showInfo2();
    }
};

void test01()
{
    MyClass<Person1> m;
    m.func1();
    // m.func2(); //error: 'class Person1' has no member named 'showInfo2'
}

int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
