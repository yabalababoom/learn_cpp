//作用: 告诉编译器 函数名称以及如何调用.函数的实际主体可以单独定义



// 可以提前声明函数,告诉编译器函数的存在; 函数的定义可以在后
// 函数可以多次声明,但是只能定义一次


//如何声明函数
int max(int a, int b);


#include <iostream>
using namespace std;


// 比较两个数的大小,返回较大的数
int max (int a,int b )
{
    return a > b ? a : b;
}


int main()
{
    int a = 10;
    int b = 20;
    cout << max(a, b) << endl;
    // system("pause");
    return 0;
}  