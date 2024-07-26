#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// 普通函数与函数模板区别:
// 首通函数调用时可以发生自动类型转换(隐式类型转换)
// 函数模板调用时,如果利用自动类型推导,不会发生隐式类型转换
// 如果利用显示指定类型的方式,可以发生隐式类型转换

//总结:建议使用显示指定类型的方式,调用函数模板,因为可以自己确定通用类型T

//普通函数
int myAdd01(int a, int b)
{
    return a + b;
}



//函数模板
template <class T>
T myAdd02(T a,T b)
{
    return a + b;
}

void test01()
{
    int a = 10;
    int b = 40;
    char c = 'c'; //c=99
    cout << myAdd01(a, c) << endl; //109,  发生了自动类型转换
}

void test02()
{
    int a = 10;
    int b = 40;
    char c = 'c'; //c=99
    //1.自动类型推导
    // cout << myAdd02(a, c) << endl;//出错
    //2.显示指定类型
    cout << myAdd02<int>(a, c) << endl;
}





int main(int argc, char const *argv[])
{
    test01();
    // test02();
    return 0;
}
