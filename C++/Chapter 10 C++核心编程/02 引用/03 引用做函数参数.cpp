// 作用:函数传参时,可以利用引用的技术让形参修饰实参
// 优点:可以简化指针修改实参

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

//1 值传递
void swap01(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

//2 地址传递
void swap02(int *pa, int *pb)
{
    cout << "pa = " << pa << endl; //pa中的值是a的地址
    cout << "pb = " << pb << endl;
    int ptmp = *pa; //*pa 是a的值
    *pa = *pb;
    *pb = ptmp;
}

//3 引用
//值传递
void swap03(int &ya, int &yb)
{
    cout << "&ya = " << &ya << endl; // 形参中的ya就是实参中的a,两者地址是一样的
    cout << "&yb = " << &yb << endl;
    int tmp = ya;
    ya = yb;
    yb = tmp;
}
int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 20;
    // swap01(a, b); //值传递, 原值不变

    cout << "&a = " << &a << endl;
    cout << "&b = " << &b << endl;
    // swap02(&a, &b); // 地址传递, 原值更改

    swap03(a, b); //引用,原值更改

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}