#include <iostream>
#include <string>
#include <ctime>
using namespace std;


// 1.2.2函数模板注意事项
// 注意事项:
    // ·自动类型推导,必须推导出一致的数据类型T,才可以使用
    // ·模板必须要确定出T的数据类型,才可以使用

template<class T>
void mySwap(T &a,T &b)
{
    T temp = a;
    a = b;
    b = temp;
}




void test01()
{
    int a = 10;
    int b = 30;
    char c = 'c';
    cout << "a=" << a << endl;
    cout << "c=" << c << endl;
    // mySwap(a, c); 自动类型推导,必须推导出一致的数据类型T,才可以使用

    cout << "a=" << a << endl;
    cout << "c=" << c << endl;
}


//模板必须要确定出T的数据类型,才可以使用
template<class T> 
void func() 
{
    cout<<"func called"<<endl;
}

void test02()
{
    func<int>();//给定数据类型
}


int main(int argc, char const *argv[])
{
    // test01();
    test02();
    return 0;
}



