// 在C++中,函数的形参列表中的形参是可以有默认值的.
// 语法: 返回值类型 函数名 (参数=默认值) { }


// 注意事项:
//1. 默认值参数必须在形参的最右边
// int func01(int a, int b=100, int c)  //错误写法
// {
//     return a + b + c;
// }
//2. 函数声明,函数实现只有一个能添加默认参数 (一下为错误写法)
// int func(int a = 10; int b = 10); //函数声明

// int func(int a = 20; int b = 20){ //函数实现
//     return a + b;
// }

#include <iostream>
#include <string>
#include <ctime>
    using namespace std;


int func01(int a, int b, int c)
{
    return a + b + c;
}



//函数默认参数
int func02(int a, int b=2, int c=3)
{
    return a + b + c;
}

int main(int argc, char const *argv[])
{
    cout << func01(110,220,330) << endl;

    cout << func02(110,220,330) << endl;
    cout << func02(110,220) << endl; //可以传2个参数
    cout << func02(110) << endl; //可以传1个参数

    return 0;
}


