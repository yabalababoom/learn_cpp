// 2.1 引用的基本使用
// 作用：给变量起别名
// 语法： 数据类型 &别名 = 原名
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main(int argc, char const *argv[])
{
    //引用的基本用法
    int a = 10;
    //创建引用
    int &b = a;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    b = 100;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}
