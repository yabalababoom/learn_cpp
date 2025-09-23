
/*
3.1.3string赋值操作
    功能描述：
    ·给string字符串进行赋值
赋值的函数原型：
    ·string& operator= (const char*s);          //char*类型字符串赋值给当前的字符串
    ·string& operator= (const string &s);       //把字符串s赋给当前的字符串
    ·string& operator= (char c);                //字符赋值给当前的字符串

    ·string& assign(const char *s);              //把字符串s赋给当前的字符串
    ·string& assign(const char *s,int n);       //把字符串s的前n个字符赋给当前的字符串
    ·string& assign(const string &s);           //把字符串s赋给当前字符串
    ·string& assign(int n,char c);              //用n个字符c赋给当前字符串

*/

//string的赋值方式很多，operator=这种方式是比较实用的

#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <algorithm>



void test01()
{
    //char*类型字符串赋值给当前的字符串
    string str1;
    str1 = "hello world";
    cout << "str1 = " << str1 << endl;

    //把字符串s赋给当前的字符串
    string str2;
    str2 = str1;
    cout << "str2 = " << str2 << endl;

    //字符赋值给当前的字符串 (用的比较少)
    string str3;
    str3 = 'a';
    cout << "str3 = " << str3 << endl;

    //assign(const char *s)
    string str4;
    str4.assign("hello C++");
    cout << "str4 = " << str4 << endl;

    //assign(const char *s,int n)   把字符串s的前n个字符赋给当前的字符串
    string str5;
    str5.assign("hello,c++", 5);
    cout << "str5 = " << str5 << endl;

    //assign(const string &s);           //把字符串s赋给当前字符串
    string str6;
    str6.assign(str5);
    cout << "str6 = " << str6 << endl;

    //string& assign(int n,char c);              //用n个字符c赋给当前字符串
    string str7;
    str7.assign(10,'r');
    cout << "str7 = " << str7 << endl;

}

int main()
{
    test01();
    // test02();
    system("pause");
    return 0;
} 