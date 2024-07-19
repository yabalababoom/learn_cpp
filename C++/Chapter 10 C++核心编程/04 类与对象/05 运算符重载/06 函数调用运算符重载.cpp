#include <iostream>
#include <string>
#include <ctime>
using namespace std;

/*
4.5.6函数调用运算符重载
    1.函数调用运算符0也可以重载
    2.由于重载后使用的方式非常像函数的调用,因此称为仿函数
    3.仿函数没有固定写法,非常灵活
*/

class MyPrint
{
private:
    /* data */
public:
    // 重载函数调用运算符
    void operator()(string test)
    {
        cout << test << endl;
    }
};

//真函数
void printfunc(string text)
{
    cout << text << endl;
}



void test01()
{
    MyPrint myPrint;
    myPrint("重载()仿函数输出 : hello world");
    printfunc("真函数输出 : hello world");
}

// #######################################
class MyAdd
{
private:
    /* data */
public:
    int operator()(int num1,int num2)
    {
        return num1 + num2;
    }

};
void test02()
{
    MyAdd myAdd;
    cout << myAdd(10, 20) << endl;
}






int main(int argc, char const *argv[])
{
    // test01();
    test02();
    //匿名函数对象调用
    cout << MyAdd()(100,200) << endl;
    return 0;
}
