
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

/*
1.2函数模板
    ·C+另一种编程思想称为泛型编程,主要利用的技术就是模板
    ·C++提供两种模板机制:函数模板和类模板
  1.2.1函数模板语法
    函数模板作用:
        建立一个通用函数,其函数返回值类型和形参类型可以不具体制定,用一个虚拟的类型来代表.
    
    语法:
        template<typename T>   
        函数声明或定义

    解释:
        template  关键字:声明创建模板
        typename  关键字:表面其后面的符号是一种数据类型,可以用class代替
        T         通用的数据类型,名称可以替换,通常为大写字母
*/


// 将类型参数化,使用更加广泛





//交换两个整型
void swapInt(int &a, int &b)//引用传递
{
    int temp = a;
    a = b;
    b = temp;
}
//交换两个浮点
void swapDouble(double &a, double &b)//引用传递
{
    double temp = a;
    a = b;
    b = temp;
}
 

//函数模板
template<typename T> //声明一个模板,告诉编译器,后面代码出现的T不要报错,T是通用数据类型
void mySwap(T &a,T &b)
{
    T temp = a;
    a = b;
    b = temp;
}


int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 20;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    // swapInt(a, b);
    //使用函数模板
    //1. 自动类型推导
    // mySwap(a, b);
    //2. 显示指定类型
    mySwap<int>(a, b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;


    double c = 10.2;
    double d = 20.1;
    cout << "c=" << c << endl;
    cout << "d=" << d << endl;
    // swapDouble(c, d);
    // mySwap(c, d);
    mySwap<double>(c, d);
    cout << "c=" << c << endl;
    cout << "d=" << d << endl;
    return 0;
}




