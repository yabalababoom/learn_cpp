// 指针也是一种数据类型, 一版占用4(32位)~8(64位)个字节的空间


#include <iostream>
using namespace std;

int main()
{

    int a = 10;
    int * p = &a;

    // 在64位os下, 指针都是占用8个字节的内存空间
    cout << "sizeof (int *) :" << sizeof(int *) << endl; // 8
    cout << "sizeof (float *) :" << sizeof(float *) << endl; // 8
    cout << "sizeof (double *) :" << sizeof(double *) << endl; // 8
    cout << "sizeof (char *) :" << sizeof(char *) << endl; // 8
    cout << "sizeof (long long *) :" << sizeof(long long *) << endl; // 8
    // system("pause");
    return 0;
}  