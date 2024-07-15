//用途:
//1.查看二维数组所占内存空间
//2.获取二维数组首地址
#include <iostream>
using namespace std;


int main()
{
    // 1.查看二维数组所占内存空间
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    cout << "size of arr[2][3] :" << sizeof(arr) << endl; //24 = 6*4byte
    cout << "size of arr[0] :" << sizeof(arr[0]) << endl; //12 = 3*4byte
    cout << "size of arr[0][0] :" << sizeof(arr[0][0]) << endl; //4
    cout << "size of *arr :" << sizeof(*arr) << endl; //12
    cout << "row of arr[2][3] :" << sizeof(arr)/sizeof(arr[0]) << endl; //2
    cout << "column of arr[2][3] :" << sizeof(arr[0])/sizeof(arr[0][0]) << endl; //3

    // 2.获取二维数组首地址
    cout << "address of arr :" << (long long)arr << endl; //0x61fe00
    // printf("address of arr :%d", arr); //6422016
    cout << "address of arr[0] :" << (long long)arr[0] << endl; //0x61fe00
    // printf("address of arr[0] :%d", arr[0]); //6422016
    cout << "address of arr[1] :" << (long long)arr[1] << endl; //0x61fe0c
    // printf("address of arr[1] :%d", arr[1]); //6422028
    cout << "address of arr[0][0] :" << (long long)&arr[0][0] << endl; //:6422016
    cout << "address of arr[0][0] :" << (long long)&arr[0][1] << endl; //:6422020
    // system("pause");
    return 0;
}