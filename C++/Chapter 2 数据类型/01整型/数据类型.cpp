// C++规定在创建一个变量或者常量时，必须要指定出相应的数据类型，否则无法给变量分配内存
// 2.1 整型
//  数据类型       占用空间        取值范围
// short           2bytes         -2^15 ~ 2^15-1 
// int             4bytes         -2^31 ~ 2^31-1
// long            4bytes         -2^31 ~ 2^31-1
// long long       8bytes         -2^63 ~ 2^63-1
#include <iostream>
using namespace std;

int main()
{
    short num1 = 10; // 取值 (-32768~32767), 赋值超过这个范围会出现意外的值 如: num1 = -432
    int num2 = 10;
    long num3 = 10;
    long long num4 = 10;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    cout << "num3 = " << num3 << endl;
    cout << "num4 = " << num4 << endl;
    system("pause");
    return 0;
} 