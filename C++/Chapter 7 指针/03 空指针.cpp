// 空指针: 指针变量指向内存中编号为0的空间
// 用途: 初始化指针变量
// 注意: 空指针指向的内存是不可以访问的


#include <iostream>
using namespace std;

int main()
{

    // 空指针
    int *p = NULL;

    // 空指针指向的内存是不可以访问的, 0~255的内存编号是系统占用的, 用户不可以访问
    *p = 1000;
    cout << *p << endl; // 无输出
    // system("pause");
    return 0;
}  