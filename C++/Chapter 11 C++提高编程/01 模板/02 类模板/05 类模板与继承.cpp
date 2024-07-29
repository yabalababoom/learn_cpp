#include <iostream>
#include <string>
#include <ctime>
using namespace std;

/*
当类模板碰到继承时,需要注意一下几点:
    1.当子类继承的父类是一个类模板时,子类在声明的时候,要指定出父类中T的类型
    2.如果不指定,编泽器无法给子类分配内存
    3.如果想灵活指定出父类中T的类型,子类也需变为类模板

*/


//总结:如果父类是类模板,子类需要指定出父类中T的数据类型

template <class T>
class Base
{
    T m;
};
//1.当子类继承的父类是一个类模板时,子类在声明的时候,要指定出父类中T的类型
// class Son :public Base
class Son :public Base<int>
{

};

void test01()
{
    Son s1;
}




// 3.如果想灵活指定出父类中T的类型,子类也需变为类模板
template<class T1,class T2>
class Son2:public Base<T2>
{
public:
    T1 obj;
    Son2()
    {
        cout << "type of T1: " << typeid(T1).name() << endl;
        cout << "type of T2: " << typeid(T2).name() << endl;
    }
};

void test02()
{
    Son2<int, char> s2;
}   

int main(int argc, char const *argv[])
{
    // test01();
    test02();
    return 0;
}

