//栈区的注意事项
//栈区:
    // 由编译器自动分配释放,存放函数的参数值(形参),局部变量等
    // 注意事项:不要返回局部变量的地址,栈区开辟的数据由编译器自动释放



#include <iostream>
#include <string>
#include <ctime>
using namespace std;


int * func()
{
    int a = 10;//局部变量    存放在栈区,栈区的数据在函数执行完后自动释放
    cout << &a << endl;
    return &a;
}


int main(int argc, char const *argv[])
{
    int *p = func(); // 接受func的返回值
    cout << *p << endl; // 无法运行出结果
    cout << *p << endl;
    return 0;
}
