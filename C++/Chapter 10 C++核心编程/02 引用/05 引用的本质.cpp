// 本质:引用的本质在c++内部实现是一个指针常量.

// const修饰常量 ---指针常量
//         语法:int * const p = &a;
//         特点:指针的指向不可以修改,但是指针指向的值可以修改;

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

void func(int& ref)
{
    ref = 100; // ref 是对a的引用, 编译器自动转换为*ref  = 100;
}

int main(int argc, char const *argv[])
{
    int a = 10;
    
    int &ref = a; //编译器会自动转换为 int * const  ref = &a, ref指向变量a的内存,且指向不可更改
    cout << "&a = " << &a << endl; //&a = 0x61fe1c
    cout << "&ref = " << &ref << endl;  //&ref = 0x61fe1c

    ref = 20; // 编译器发现ref是引用,编译器自动转换为*ref = 20;

    func(a); 

    cout << "a = " << a << endl; //a = 100
    cout << "ref = " << ref << endl;  //ref = 100

    return 0;
}
