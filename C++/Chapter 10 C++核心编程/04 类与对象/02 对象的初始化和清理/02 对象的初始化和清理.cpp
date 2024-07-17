#include <iostream>
#include <string>
#include <ctime>
using namespace std;

//对象的初始化和清理
//1、构造函数进行初始化操作

class Person
{
private:
    /* data */
public:
    //构造函数 自动调用, 不写的话,编译器写一个空实现的构造函数
    // 1.构造函数,没有返回值也不写void
    // 2.函数名称与类名相同
    // 3.构造函数可以有参数,因此可以发生重载
    // 4.程序在调用对象时候会自动调用构造,无须手动调用,而且只会调用一次
    Person(/* args */)
    {
        cout << "Person 构造函数的调用" << endl;
    }

    // 析构函数  自动调用, 不写的话,编译器写一个空实现的构造函数
    // 1.析构函数,没有返回值也不写void
    // 2.函数名称与类名相同,在名称前加上符号～
    // 3.析构函数不可以有参数,因此不可以发生重载
    // 4.程序在对象销毁前会自动调用析构,无须手动调用,而且只会调用一次
    ~Person()
    {
        cout << "Person 析构函数的调用" << endl;
    }

};


void test01()
{
    Person p1;  //局部变量, 栈区的数据, test01 执行完就销毁
}


int main(int argc, char const *argv[])
{
    // test01();

    Person p2;  //定义在main中
    system("pause");
    return 0;
}

