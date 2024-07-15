//指针的作用:通过指针间接访问内存

/*
1. 内存编号从0开始, 一般用16进制数字表示;
2. 可以利用指针变量保存地址
*/

#include <iostream>
using namespace std;

int main()
{
    // 1. 如何定义指针
    int a = 10;
    // 指针定义的语法: 数据类型 *指针变量名;
    int * p;
    // 让指针*p记录变量a的地址
    p = &a;
    // 另一种定义方式 int *p = &a;

    cout << "a = " << a << endl;
    cout << "&a = " << &a << endl; //0x61fe1c
    cout << " p = " << p << endl;  //0x61fe1c

    // 2. 使用指针
    //可以通过解引用方式(*p)找到指针指向的内存中的数据
    cout << "*p = " << *p << endl;  //10
    *p = 1000; //将指针指向的内存中的数据改为1000
    cout << "a = " << a << endl;    //1000
    cout << "*p = " << *p << endl;  //1000
    // system("pause");
    return 0;
}  