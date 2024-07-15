#include <iostream>
using namespace std;

int main()
{
    // 利用sizeof 求数据类型占用的内存空间大小
    // 语法: sizeof(数据类型/变量)
    short num1 = 10; // 取值 (-32768~32767), 赋值超过这个范围会出现意外的值 如: num1 = -432
    int num2 = 10;
    long num3 = 10;
    long long num4 = 10;
    cout << "num1 = " << num1 << "; 内存空间占用为:" << sizeof(num1) << endl; // 内存空间占用为:2
    cout << "num2 = " << num2 << "; 内存空间占用为:" << sizeof(num2) << endl; // 内存空间占用为:4
    printf("address of num2: &num2=%p\n", &num2);
    cout << "&num2 = " << &num2 << endl;
    cout << "num3 = " << num3 << "; 内存空间占用为:" << sizeof(num3) << endl; // 内存空间占用为:4
    cout << "num4 = " << num4 << "; 内存空间占用为:" << sizeof(num4) << endl; // 内存空间占用为:8
    system("pause");
    return 0;
}  