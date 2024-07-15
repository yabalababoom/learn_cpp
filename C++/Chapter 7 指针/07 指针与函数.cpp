// 利用指针作为函数的参数, 可以修改实参的值

#include <iostream>
using namespace std;

//值传递
void swap1 (int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

//地址传递
void swap2 (int * pa, int * pb) // 传参:int * pa = &a, int * pb = &b
{
    cout << "pa = " << pa << endl;   //pa = 0x61fe08  指针pa中存的是变量a的地址 0x61fe08
    cout << "pb = " << pb << endl;   //pb = 0x61fe0c  指针pb中存的是变量b的地址 0x61fe0c
    cout << "*pa = " << *pa << endl; //*pa = 10
    cout << "*pb = " << *pb << endl; //*pb = 20
    cout << "&pa = " << &pa << endl; // &pa = 0x61fde0  指针pa的地址
    cout << "&pb = " << &pb << endl; // &pb = 0x61fde8  指针pb的地址
    // cout << "&temp = " << &temp << endl;

    // 交换*pa, *pb, 也就是交换原a,b 内存中的值
    int temp = * pa; // temp = * pa = 10 
    * pa = * pb;
    * pb = temp;
}


int main()
{
    int a = 10;
    int b = 20;
    
    cout << "&a = " << &a << endl; // &a = 0x61fe08
    cout << "&b = " << &b << endl; // &b = 0x61fe0c
    cout << "-------开始进入函数------------" << endl;
    // 地址传递,可以改变实参中的值
    swap2(&a, &b); //将a,b 的地址传给函数swap2
    cout << "--------函数退出-----------" << endl;
    cout << "&a = " << &a << endl; // &a = 0x61fe08
    cout << "&b = " << &b << endl; // &b = 0x61fe0c

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
} 