// 特点: 1. 放在一块连续内存空间中; 
//       2. 每个元素都是相同类型的数据

// 定义方式
/*
1. 数据类型 数组名[数组长度];
2. 数据类型 [数组长度] = {v1,v2,v3,v4,v5};
3. 数据类型 数组名[] = {v1,v2,v3,v4,v5};
 */

#include <iostream>
using namespace std;


int main()
{
    int arr[5] = {10,11,12,14}; // 未赋值的值默认为0
    for (int i = 0; i < 5; i++) {
        cout << "arr[" <<i<<"] = "<<arr[i] << endl;
    }

    // system("pause");
    return 0;
}  