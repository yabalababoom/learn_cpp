// 2.堆区:
//         由程序员分配释放,若程序员不释放,程序结束时由操作系统回收
//         在C++中主要利用new在堆区开辟内存


#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int *  func()
{
    //利用new关键字 将数据开辟到堆区
    //指针是局部变量,放在栈区, 指针保存的数据放在堆区
    int * p = new int(10);
    cout << (long long)p << endl;

    return p;
}


int main(int argc, char const *argv[])
{
    int *p = func();
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;
    return 0;
}

