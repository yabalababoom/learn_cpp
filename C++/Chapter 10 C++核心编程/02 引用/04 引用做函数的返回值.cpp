// 作用:引用是可以作为函数的返回值存在的
// 注意:不要返回局部变量引用
// 用法:函数调用作为左值

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// 1. 不要返回局部变量引用
int& test01() //返回的是引用
{ 
    int a = 10; //局部变量存放在栈区,栈区开辟的数据由编译器自动释放,无法访问到正确的值
    return a;
}


//2.函数调用作为左值
int& test02() //返回的是引用
{
    static int a = 10; //局部变量存放在栈区,加上static后,该变量是静态变量,存放在全局区,由系统管理释放
    cout << "&a = " << &a << endl;
    return a;
}




int main(int argc, char const *argv[])
{
    // 1. 不要返回局部变量引用
    // int &ref = test01(); 
    // cout << "ref = " << ref << endl;  //ref = 空或者乱码  内存中的数据已经被释放


    int &ref2 = test02(); 
    cout << "ref2 = " << ref2 << endl;  //ref2 = 10
    cout << "ref2 = " << ref2 << endl;  //ref2 = 10
    cout << "&ref2 = " << &ref2 << endl;  //&ref2 = 0x403010 与test02()

    // //2.函数调用作为左值 (如倮函数的返回值是引用,这个函数调用可以作为左值)
    test02() = 10000; // 对返回的a重新赋值,而ref2是a的引用,指向同一块内存
    cout << "ref2 = " << ref2 << endl;  //ref = 10
    cout << "ref2 = " << ref2 << endl;  //ref = 10
    cout << "ref2 = " << ref2 << endl;  //ref = 10


    return 0;
}
