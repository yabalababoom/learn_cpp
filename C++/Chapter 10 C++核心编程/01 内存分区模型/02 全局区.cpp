#include <iostream>
#include <string>
#include <ctime>
using namespace std;

/*
全局区中包含:全局变量,静态变量,static关键字,字符串常量,const修饰全局变量
*/


//全局变量
int g_a = 33;
int g_b = 44;

// const 修饰全局变量
const int c_g_c = 88;
const int c_g_d = 88;


int main(int argc, char const *argv[])
{
    //全局区
    //全局变量 静态变量 常量

    //创建普通局部变量
    int l_a = 10;
    int l_b = 23;
    // cout << "addr of l_a:" << &l_a << endl;
    cout << "addr of l_a:" << (long long)&l_a << endl; //局部变量地址 a:6422040
    // cout << "addr of l_b:" << &l_b << endl;
    cout << "addr of l_b:" << (long long)&l_b << endl; //b:6422044
    // cout << "addr of g_a:" << &g_a << endl;
    cout << "addr of g_a:" << (long long)&g_a << endl; // g_a:4206612
    // cout << "addr of g_b:" << &g_b << endl;
    cout << "addr of g_b:" << (long long)&g_b << endl; // g_b:4206608  全局变量的地址和局部变量地址明显不在一个内存段
    

    //静态变量 在普通变量前加static, 属于静态变量
    static int s_a = 55;
    static int s_b = 66;
    cout << "addr of s_a:" << (long long)&s_a << endl; //s_a:4206612 和全局变量字段接近
    cout << "addr of s_b:" << (long long)&s_b << endl; //s_b:4206608


    //常量
        //字符串常量 (双引号)
    cout << "addr of string:" << (long long)&"hello world" << endl; //string:4210778 和全局变量字段接近

    //const 修饰的变量
        // const 修饰全局变量
    cout << "addr of c_g_c:" << (long long)&c_g_c << endl; //c_g_c:4210824
    cout << "addr of c_g_d:" << (long long)&c_g_d << endl; //c_g_d:4210820
        // const 修饰局部变量
    const int c_l_a = 10;
    const int c_l_b = 10;
    cout << "addr of c_l_a:" << (long long)&c_l_a << endl; //c_l_a:6422040 明显不在全局区
    cout << "addr of c_l_b:" << (long long)&c_l_b << endl; //c_l_b:6422044
}
