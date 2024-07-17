/*3.3.1函数重载概述
作用:函数名可以相同,提高复用性
函数重载满足条件:
    ·同一个作用域下
    ·函数名称相同
    ·函数参数  类型不同  或者  个数不同  或者  顺序不同
注意:函数的返回值不可以作为函数重载的条件
*/


//根据不同的参数,选择不同的函数去执行



#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// 函数重载满足条件:
//     ·同一个作用域下
//     ·函数名称相同
//     ·"函数参数" 类型不同  或者  个数不同  或者  顺序不同
void func()
{
    cout << "this is func" << endl;
}

void func(int a )
{
    cout << "this is func (int a) again" << endl;
}


void func(double a )
{
    cout << "this is func (double a) again" << endl;
}

void func(int a, double b)
{
    cout << "this is func (int a, double b) again" << endl;
}

void func(double a,  int b)
{
    cout << "this is func (double a,  int b) again" << endl;
}

// 注意:函数的返回值不可以作为函数重载的条件
// int func(double a,  int b)
// {
//     cout << "this is func (double a,  int b) again" << endl;
// }

int main(int argc, char const *argv[])
{
    func(); // this is func
    func(10); // this is func (int a) again
    func(10.01254); //this is func (double a) again
    func(10.01254,1000); //this is func (double a;  int b) again
    func(100,10.01254);//this is func (int a; double b) again
    return 0;
}
