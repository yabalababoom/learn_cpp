//作用:让代码结构更加清晰
/*
4个步骤:
    1. 创建.h的头文件
    2. 创建.cpp的源文件
    3. 在头文件中写函数的声明
    4. 在源文件中写函数的定义,导入.h的头文件
*/
#include <iostream>
using namespace std;

//实现两个变量的交换
//函数的声明
void swap(int a, int b);
// 函数的定义
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
}



int main()
{
    int a = 10;
    int b = 20;
    swap(a, b);
    // system("pause");
    return 0;
}  
