// 野指针: 指针变量指向非法的内存空间

#include <iostream>
using namespace std;

int main()
{

    // 野指针
    int *p = (int *)0x1100; // 该内存地址 0x1100 未被声明,无权限访问

    cout << *p << endl; // 无输出
    // system("pause");
    return 0;
}  