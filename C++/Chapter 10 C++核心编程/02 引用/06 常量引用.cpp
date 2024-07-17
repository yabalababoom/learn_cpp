// 作用:常量引用主要用来修饰形参,防止误操作
// 使用场景:在函数形参列表中,可以加const修饰形参,防止形参改变实参

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

void showValue(int &val)
{
    val = 1000;//由于val是对b的引用, 相当于对main中的b重新赋值,不可以这样
    cout << "val=" << val << endl;
}


void showValue02(const int &val) //加上const 防止对val进行修改
{
    val = 1000;//报错 error: assignment of read-only reference 'val'
    cout << "val=" << val << endl;
}



int main(int argc, char const *argv[])
{
    // int a = 10;
    // int &ref = 10; // 引用必须指向一块合法的内存空间(栈区,堆区),10是常量区,
    // const int &ref = 10; // 加上const后,编译器将代码修改为 int temp = 10; const int & ref = temp; 此时ref无法被赋值

    // 修饰形参
    int b = 100;
    // showValue(b);
    showValue02(b);
    cout << "b=" << b << endl;

    return 0;
}












