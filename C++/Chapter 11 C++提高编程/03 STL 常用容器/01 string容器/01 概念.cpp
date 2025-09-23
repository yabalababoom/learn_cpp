/*
3.1.1 string 基本概念本质：
        string 是 C+ +风格的字符串，而 string 本质上是一个类
    string 和 char* 区别：
        char*是一个指针· 
        string 是一个，类 内部封装了(char*，管理这个字符串，是一个char* 类型的容器。
        
    特点：string 类内部封装了很多成员方法
        例如：查找 find, 拷贝 copy, 删除 delete 替换replace, 插入 insert 
        string 管理 char* 所分配的内存，不用担心复制越界和取值越界等，由类内部进行负责
    
3.1.2 string构造函数
    string();                       //创建一个空的字符串 例如 :string str;
    string(const char* s) ;         //使用字符串s初始化 
    string(const string& str);      //使用一个string对象初始化另一个string对象
    string(int n, char c);          //使用n个字符串c初始化
*/

#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <algorithm>



void test01()
{

}

int main()
{
    test01();
    // test02();
    system("pause");
    return 0;
} 