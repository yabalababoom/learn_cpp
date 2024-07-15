#include <iostream>
using namespace std;
// 用法 :用于显示单个字符, 必须用单引号
// 语法 :char ch = 'a';

int main()
{
    char a = 'a';
    cout << "a = " << a << "; 内存空间占用为:" << sizeof(a)<< endl; // 内存空间占用为:1
    cout << "a = " << a << "; ASCII编码为:" << int(a)<< endl; // ASCII编码为:97


    system("pause");
    return 0;
}  