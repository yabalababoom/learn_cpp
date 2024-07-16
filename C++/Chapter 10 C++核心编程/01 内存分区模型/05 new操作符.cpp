#include <iostream>
#include <string>
#include <ctime>
using namespace std;

/*
C++中利用new操作符在堆区开辟数据
堆区开辟的数据,由程序员手动开辟,手动释放,释放利用操作符delete
语法:new数据类型
利用new创建的数据,会返回该数据对应的类型的指针
*/


//1. new的基本用法
int * func()
{
    int *p = new int(10); //new 返回的是该数据类型的指针
    return p;
}

void test01()
{
    int *p = func();
    cout << "*p = " << *p << endl; //堆区的数据由用户开辟,管理释放
    cout << "*p = " << *p << endl;
    cout << "*p = " << *p << endl;

    delete p; //释放
    cout << "*p = " << *p << endl; // *p = 39546656
    cout << "*p = " << *p << endl;
}



//2. 在堆区用new开辟数组
void test02()
{
    int *arr = new int[10]; //返回数组的首地址
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 100; //对数组初始化
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }

    //释放堆区数组, 要加[]作为强调
    delete[] arr;
}

int main(int argc, char const *argv[])
{

    // test01();
    test02();

    return 0;
}
