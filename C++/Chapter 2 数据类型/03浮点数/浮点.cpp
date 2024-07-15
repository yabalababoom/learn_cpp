// C++规定在创建一个变量或者常量时，必须要指定出相应的数据类型，否则无法给变量分配内存
// 2.1 浮点型
//  数据类型       占用空间        有效数字范围
// float           4bytes         7位
// double          8bytes         15~16位

#include <iostream>
using namespace std;

int main()
{
    // float
    float  f1 = 3.14159265358979141f; // 默认情况下编译器将小数认为double类型, 对float要加f作为区分
    
    // double
    double f2 = 3.14159265358979141; // 默认输出小数显示6位有效数字

    cout << "f1 = " << f1 << "; 内存空间占用为:" << sizeof(f1)<< endl; // 内存空间占用为:4
    cout << "f2 = " << f2 << "; 内存空间占用为:" << sizeof(f2)<< endl; // 内存空间占用为:8

    // 科学计数法
    float f3 = 3e2; // 3* 10 ^ 2
    cout << "f3 = " << f3 << "; 内存空间占用为:" << sizeof(f3)<< endl;

    system("pause");
    return 0;
} 