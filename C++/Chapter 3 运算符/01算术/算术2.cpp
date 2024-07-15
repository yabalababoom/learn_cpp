// + - * / % a++ ++a a-- --a

#include <iostream>
using namespace std;


int main()
{
    int a1 = 10;
    int a2 = 10;
    int b = ++a1 * 10; // 前置加1  变量先加1,再进行运算

    int c = a2++ * 10; // 后置加1  先进行运算, 变量再加1

    cout << "a1  = " << a1  << endl; // 110
    cout << "a2  = " << a2  << endl; // 100
    cout << "b  = " << b  << endl; 
    cout << "c  = " << c  << endl; 
    
    // system("pause");
    return 0;
}  