#include <iostream>
#include <string>
#include <ctime>
using namespace std;
/*
4.2.3 拷贝构造函数调用时机(什么时候会用到)

C++中拷贝构造函数调用时机通常有三种情况
    1.使用一个已经创建完毕的对象来初始化一个新对象
    2.值传递的方式给函数参数传值
    3.以值方式返回局部对象
*/

class Person
{
private:
    /* data */
public:
    int m_Age;

    Person()
    {
        cout << "Person 默认(无参)构造函数的调用" << endl;
    };

    Person (int age)
    {
        cout << "Person 有参构造函数的调用" << endl;
        m_Age = age;
    }

    Person( const Person &p )
    {
        m_Age = p.m_Age;
        cout << "Person 拷贝构造函数的调用" << endl;
    }

    
    ~Person()
    {
        cout << "Person 析构函数的调用" << endl;
    };
};


//    1.使用一个已经创建完毕的对象来初始化一个新对象
void test01()
{
    Person p1(20);
    Person p2(p1);
    cout << "age of p2:" << p2.m_Age << endl;
}


// 2.值传递的方式给函数参数传值
void doWork(Person p)
{

}

void test02()
{
    Person p;
    doWork(p); //进行了值传递,数据拷贝了新的一份
}


// 3.以值方式返回局部对象(我本地运行是一样的对象,没有对拷贝函数的调用)
Person doWork2()
{ 
    Person p1;
    cout << (int *)&p1 << endl;
    cout << (long long)&p1 << endl;
    return p1; //以值方式返回局部对象时,返回一个新的copy对象(在我这里,是同一块内存地址)
}
void test03()
{
    Person p = doWork2();
    cout << (int *)&p << endl;
    cout << (long long)&p << endl;
}


int main(int argc, char const *argv[])
{
    // test01();
    // test02();
    test03();

    system("pause");
    return 0;
}

 