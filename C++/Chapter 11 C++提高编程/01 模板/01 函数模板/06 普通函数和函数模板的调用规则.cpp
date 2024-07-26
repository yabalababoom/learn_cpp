#include <iostream>
#include <string>
#include <ctime>
using namespace std;
/*
调用规则如下:
    1.如果函数模板和普通函数都可以实现,优先调用普通函数
    2.可以通过空模板参数列表来强制调用函数模板
    3.函数模板也可以发生重载
    4.如果函数模板可以产生更好的匹配,优先调用函数模板
*/


// 总结:既然提供了函数模板,最好就不要提供普通函数,否则容易出现二义性


void myPrint(int a, int b)
{
    cout << "normal func called" << endl;
}

template<class T>
void myPrint(T a, T b)
{
    cout << "template func called" << endl;
}

template<class T>
void myPrint(T a, T b,T c)
{
    cout << "redefined template func called" << endl;
}



void test01()
{
    int a = 10;
    int b = 20;
    int c = 30;
    myPrint(a, b); // normal func called  ;优先调用普通函数
    myPrint<>(a, b); // template func called; 通过空模板参数列表来强制调用函数模板
    myPrint<>(a, b, c); // redefined template func called; 函数模板也可以发生重载
    char c1 = 'a';
    char c2 = 'b';
    myPrint(c1, c2); // template func called; 如果函数模板可以产生更好的匹配(不用发生类型转换),优先调用函数模板
}

int main(int argc, char const *argv[])
{
    test01();
    return 0;
}

