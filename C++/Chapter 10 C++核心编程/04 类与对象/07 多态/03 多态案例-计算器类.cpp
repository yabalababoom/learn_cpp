#include <iostream>
#include <string>
#include <ctime>
using namespace std;


// 案例描述:
// 分别利用普通写法和多态技术,设计实现两个操作数进行运算的计算器类


// 多态的优点:
// ·代码组织结构清晰
// ·可读性强
// ·利于前期和后期的扩展以及维护

//1.普通写法
class Calculator
{
public:
    int m_Num1;
    int m_Num2;
    int getResult(string oper)
    {
        if (oper == "+")
        {
            return m_Num1 + m_Num2;
        }
        else if (oper == "-")
        {
            return m_Num1 - m_Num2;
        }
        else if (oper == "*")
        {
            return m_Num1 * m_Num2;
        }
        return 0;
        //如果想拓展新功能, 需要修改源码(不提倡)
        //在真实开发中,提倡开闭原则: 对拓展开放,对修改关闭
    }
};



void test01()
{
    //创建计算器类
    Calculator c;
    c.m_Num1 = 10;
    c.m_Num2 = 10;
    cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getResult("+") << endl;
    cout << c.m_Num1 << "-" << c.m_Num2 << "=" << c.getResult("-") << endl;
    cout << c.m_Num1 << "*" << c.m_Num2 << "=" << c.getResult("*") << endl;
}



int main(int argc, char const *argv[])
{
    test01();

    return 0;
}
