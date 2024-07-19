#include <iostream>
#include <string>
#include <ctime>
using namespace std;
// 作用:通过重载递增运算符,实现自己的整型数据

//自定义整型
class MyInterger
{
    friend ostream &operator<<(ostream &cout, MyInterger myint);

private:
    int m_Num;

public:
    MyInterger()
    {
        m_Num = 0;
    }
    //重载++运算符  
    //1. 前置++  
    MyInterger& operator++() //返回引用
    {
        m_Num++; //先做++
        return *this; //再返回自身
    }
    
    //2.后置++(要返回值)
    MyInterger operator++(int) //加上参数 int,代表占用参数,用于区分前置后置++
    {
        // 先记录当时结果
        MyInterger tmp = *this;
        //再递增
        m_Num++;
        ///再返回记录当时结果
        return tmp;
    }
};

//用全局函数重载<<运算符
ostream & operator<<(ostream &cout, MyInterger myint) // 本质 operator<<(cout,p) 简化 cout<<p;
{
    cout <<  myint.m_Num  ; //返回cout,链式编程
    return cout;
}


void test01()
{
    MyInterger myint;
    cout << "&myint : " << &myint << endl;
    cout << "myint : " << myint << endl;
    cout << "++(++myint) : " << ++(++myint) << endl;
    cout << "myint : " << myint << endl;

}

void test02()
{

    MyInterger myint;
    cout << "&myint : " << &myint << endl;
    cout << "myint : " << myint << endl;
    cout << "myint++: " << myint++ << endl;
    cout << "(myint++)++: " << (myint++)++ << endl;
    cout << "myint : " << myint << endl;
}

int main(int argc, char const *argv[])
{
    // test01();
    test02();
    return 0;
}





