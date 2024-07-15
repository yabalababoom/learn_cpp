#include <iostream>
using namespace std;

// 常量的两种定义方式
// 1 #define 宏常量
// 2 const 修饰的变量

// 1 #define 宏常量
// #define Day 7

// int main()
// { 
//     cout << "一周有" << Day << "days" << endl;
//     system("pause");
//     return 0;
// } 

// 2 const 修饰的变量
int main()
{
    const int month = 12;
    cout << "one year has " << month << "month" << endl;
    system("pause");
    return 0;
} 