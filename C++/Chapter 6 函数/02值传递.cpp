#include <iostream>
using namespace std;

// 如果函数没有返回值,声明的时候写void,也可不写
void swap(int a, int b)
{
    cout << "before swap"<<endl;
    cout <<"a="<<a<<endl; //3
    cout <<"b="<<b<<endl; //4
    int tmp = a;
    a = b;
    b = tmp;
    cout << "after swap"<<endl;
    cout <<"a="<<a<<endl; //4
    cout <<"b="<<b<<endl; //3
}


int main()
{
    int a = 3;
    int b = 4;
    cout <<"a="<<a<<endl; //3
    cout <<"b="<<b<<endl; //4
    swap(a, b);
    cout <<"a="<<a<<endl; //3
    cout <<"b="<<b<<endl; //4
    // 值传递时,函数的形参的改变不影响实参;

    // system("pause");
    return 0;
}  