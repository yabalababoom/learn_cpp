#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <algorithm>


/*
    string();                       //创建一个空的字符串 例如 :string str;
    string(const char* s) ;         //使用字符串s初始化 
    string(const string& str);      //使用一个string对象初始化另一个string对象
    string(int n, char c);          //使用n个字符串c初始化
*/

//string 构造函数
void test01()
{
    string s1; //默认构造, 创建空字符串, 调用无参构造函数
    cout << "s1 = " << s1 << endl;

    const char *str = "hello world"; // 使用字符串初始化; 把C类型的字符串转换为C++的string
    string s2(str);
    cout << "s2 = " << s2 << endl;

    string s3(s2);                     // 拷贝构造  使用一个string对象初始化另一个string对象
    cout << "s3 = " << s3 << endl;

    string s4(10, 'a'); // 使用n个字符串c初始化  ; 只能用单引号
    cout << "s4 = " << s4 << endl;

}

int main()
{
    test01();
    // test02();
    system("pause");
    return 0;
} 