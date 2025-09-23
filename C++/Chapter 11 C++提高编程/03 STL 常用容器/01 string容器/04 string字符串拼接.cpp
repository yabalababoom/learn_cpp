/*
3.1.4string字符串拼接
功能描述：
·实现在字符串末尾拼接字符串
函数原型：
string& operator+=(const char* str);            //重载+=操作符
string& operator+=(const char c);               //重载+=操作符
string& operator+=(const string& str);          //重载+=操作符
string& append(const char *s);                  //把字符串s连接到当前字符串结尾
string& append(const char *s, int n);           //把字符串s的前n个字符连接到当前字符串结尾
string& append(const string &s);                //同operator+=(const string& str)
string& append(conststring&s，intpos，intn);    //字符串s中从pos开始的n个字符连接到字符串结尾
*/

#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <algorithm>



void test01()
{
    string str1 = "我";
    str1 += "在学习C++";
    cout << "str1 = " << str1 << endl;

    str1 += ':';  // 字符
    cout << "str1 = " << str1 << endl;

    string str2 = "LOL DNF";
    str1 += str2;
    cout << "str1 = " << str1 << endl;

    string str3 = "I ";
    str3.append("love ");
    str3.append("game: red dead redemption, greate auto theft", 6);  //把字符串s的前n个字符连接到当前字符串结尾
    str3.append(str2, 4, 7);   //字符串s中从pos开始的n个字符连接到字符串结尾

    cout << "str3 = " << str3 << endl;

}

int main()
{
    test01();
    // test02();
    // system("pause");
    return 0;
} 