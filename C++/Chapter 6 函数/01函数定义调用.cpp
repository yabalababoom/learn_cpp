//将经常使用的一段代码进行封装,方便调用

/*
函数定义的5个步骤:
1. 返回值类型
2. 函数名
3. 参数列表
4. 函数体语句
5. return 表达式
*/
#include <iostream>
using namespace std;

//定义一个加法器的函数
int add(int sum1,int sum2)
{
    int sum =0;
    sum = sum1 + sum2;
    return sum;
}

int main()
{
    int a = 3;
    int b = 4;


    cout << a <<" + "<< b << " = " << add(a, b) << endl;

    // system("pause");
    return 0;
}  