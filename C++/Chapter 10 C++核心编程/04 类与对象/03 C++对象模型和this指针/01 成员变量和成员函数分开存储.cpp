#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// 4.3.1成员变量和成员函数分开存储
    // 在C++中,类内的成员变量和成员函数分开存储
    // 只有非静态成员变量才属于类的对象上

class Person
{
    int m_A; //非静态成员变量  属于类的对象上 ****

    static int m_B; //静态成员变量  不属于类的对象上
    void func() {};  //非静态成员函数 不属于类的对象上
    static void func2() {}; //静态成员函数 不属于类的对象上

};

int Person::m_B = 0;

test01()
{
    Person p1;
    Person p2;
    //空对象 占用内存空间为: 1  , C++给空对象分配1个字节空间,是为了区分空对象占用内存的位置,空对象也应有唯一的内存空间
    cout << "size of p1:" <<sizeof(p1) << endl; //size of p1:1
    cout << "size of p2:" <<sizeof(p2) << endl; //size of p2:1
    cout << "size of p1:" <<&p1 << endl; //size of p1:0x61fdde
    cout << "size of p2:" <<&p2 << endl; //size of p2:0x61fddf
}

test02()
{
    Person p1;
    Person p2;
    //对象含有一个int类型的非静态变量数据后, 非空对象占用就是非静态变量int的占用空间
    //对象含有一个int类型的静态变量数据后, 非空对象占用就是非静态变量int的占用空间
    cout << "size of p1:" <<sizeof(p1) << endl; //size of p1:4
    cout << "size of p2:" <<sizeof(p2) << endl; //size of p2:4
    cout << "size of p1:" <<&p1 << endl; //size of p1:0x61fdd8
    cout << "size of p2:" <<&p2 << endl; //size of p2:0x61fddc
}

int main(int argc, char const *argv[])
{
    // test01();
    test02();
    return 0;
}
