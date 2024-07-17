#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// 3.3.2函数重载注意事项
// ·引用作为重载条件
// ·函数重载碰到函数默认参数

// 1.引用作为重载条件
void func(int &a )
{
    cout << "this is func (int &a) " << endl;
}
void func(const int &a )
{
    cout << "this is func (const int &a) again" << endl;
}




//2.函数重载碰到函数默认参数
void func02(int a )
{
    cout << "this is func (int a) again" << endl;
}

void func02(int a, int b=10)//有默认参数, 
{
    cout << "this is func (int a = 10) again" << endl;
}


int main(int argc, char const *argv[])
{
    int a = 10;
    const int b = 20;
    func(a); //this is func (int &a) 
    func(10); //this is func (const int &a) again
    func(b); //this is func (const int &a) again

    func02(10); //只有一个参数,两个func02都可以调用,报错
    return 0;
}
