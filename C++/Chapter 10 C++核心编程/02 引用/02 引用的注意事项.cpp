// 2.2引用注意事项
// ·引用必须初始化  ;创建时必须指向原名的内存
// ·引用在初始化后(不能更改),不可以改变

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main(int argc, char const *argv[])
{
    //1. 引用必须初始化
    int a = 10;
    // int &b;  //ERROR
    int &b = a;

    //2.引用在初始化后(不能更改),不可以改变
    int c = 20;
    b = c; //该语句是赋值,不是更改引用 

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    return 0;
}