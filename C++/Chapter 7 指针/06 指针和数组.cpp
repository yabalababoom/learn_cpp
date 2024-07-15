//作用: 利用指针访问数组中的元素

#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "first element of arr = arr[0] = " << arr[0] << endl;

    int *p = arr; //arr 就是数组arr的首地址
    cout << "first element of arr = *p     = " << *p << endl;
    cout << "second element of arr = *p+1  = " << *p+1 << endl;

    // cout << "address of first element of arr[0] = " << (long long)&arr[0] << endl;
    // cout << "address of first element of arr[0] = " << (long long)&arr << endl;
    // cout << "address of first element of arr[0] = " << (long long)arr << endl;
    // cout << p << endl; //0x61fdf0
    // cout << p+1 << endl; //0x61fdf4
    // cout << *p << endl; //0
    // cout << *p+1 << endl; //1

    //利用指针遍历数组
    for (int i = 0; i < 10; i++)
    {
        cout << *p << endl;
        p++;
    }
    
} 