//一维数组名的作用
/*
1. 统计整个数组在内存中的长度
2. 获取数组在内存中的首地址
*/

#include <iostream>
using namespace std;


int main()
{
    //1. 统计整个数组在内存中的长度
    int arr[5] = {1,2,3,4,5};
    cout << "sizeof(arr):"<<sizeof(arr) << endl; //5 * 4 byte = 20 byte
    cout << "sizeof(arr[0]):"<<sizeof(arr[0]) << endl; // 4 byte 
    
    //2. 获取数组在内存中的首地址
    cout << "address of arr: "<< arr << endl;      //address of arr: 0x61fe00
    printf("address of arr : %d\n", &arr);  //6422016
    cout << "arr[0]          : "<< &arr[0] << endl;  //arr[0]        : 0x61fe00
    printf("address of arr[0]: %d\n", &arr[0]);  //6422016
    cout << "arr[1]          : "<< &arr[1] << endl;  //arr[0]        : 0x61fe04
    printf("address of arr[1]: %d\n", &arr[1]);  //6422020
    // system("pause");
    return 0;
}  