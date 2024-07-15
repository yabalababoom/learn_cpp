
#include <iostream>
using namespace std;
// 作用 : 表示一串字符
// C语言 语法 : char 变量名[] = "字符串";
// C++  语法  : string 变量名 = "字符串";

int main()
{
    string str = "hello_world";
    cout << "str = " << str << "; 内存空间占用为:" << sizeof(str)<< endl; // 内存空间占用为:1
    // cout << "str = " << str << "; ASCII编码为:" << int(str)<< endl; // ASCII编码为:97


    // system("pause");
    return 0;
}  