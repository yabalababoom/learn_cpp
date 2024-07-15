// 语法: 判断真假?表达式2(true):表达式3(False)


#include <iostream>
using namespace std;


int main()
{
    int a = 10;
    int b = 20;
    int c = 0;
    // // 比较 a,b的大小
    // c = (a > b ? a : b);
    // cout << "c = "<< c << endl;

    // C++中三目运算返回的是变量,可以继续赋值
    (a > b ? a : b) = 100;
    cout << "a = "<< a << endl;
    cout << "b = "<< b << endl;
    // system("pause");
    return 0;
}  