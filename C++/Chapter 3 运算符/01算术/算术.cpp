// + - * / % a++ ++a a-- --a

#include <iostream>
using namespace std;


int main()
{
    int a = 10;
    int b = 3;
    cout << "a + b  = " << a+b  << endl; 
    cout << "a - b  = " << a-b  << endl; 
    cout << "a * b  = " << a*b  << endl;
    cout << "a / b  = " << a / b << endl; // 两个整数相处仍然为整数; 除数不能为0
    cout << "a % b  = " << a % b << endl; // 除数不能为0;小数不能取余

    
    // system("pause");
    return 0;
}  