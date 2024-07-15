// 代表真或假的值, 占用一个字节
// 除了0,都是真
#include <iostream>
using namespace std;


int main()
{
    bool flag = true;
    cout << "flag = " << flag << endl;
    cout << "flag = " << flag << "; 内存空间占用为:" << sizeof(flag)<< endl; // 内存空间占用为:1
    cout << "flag = " << flag << "; ASCII编码为:" << int(flag)<< endl; // ASCII编码为:97


    // system("pause");
    return 0;
}  