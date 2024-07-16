// 封装一个函数,利用冒泡排序,实现数组的升序排序

#include <iostream>
using namespace std;

void bubble_sort(int *arr,int len) //参数1:数组首地址,参数2:数组长度  
{
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - i -1; j++)
        {
            if (arr[j] > arr[j + 1]) 
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}


void printArray(int *arr,int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    //1 定义数组
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    //2 计算数组长度
    int len = sizeof(arr) / sizeof(arr[0]);

    //3 调用函数
    bubble_sort(arr, len); // 实参1:0x61fdf0;  实参2:10
    
    // 4 打印函数
    printArray(arr, len);
    
    return 0;
} 