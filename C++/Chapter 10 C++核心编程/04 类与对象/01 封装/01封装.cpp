#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// C++面向对象的三大特性为:封装、继承、多态
// C++认为万事万物都皆为对象,对象上有其属性和行为

// 4.1封装
// 4.1.1封装的意义
// 封装是C++面向对象三大特性之一
// 封装的意义:
// ·将属性和行为作为一个整体,表现生活中的事物
// ·将属性和行为加以权限控制
// 语法: class 类名 { 访问权限: 属性 / 行为};

// 示例1:设计一个圆类,求圆的周长 ;公式:周长=2*PI*r
const double PI = 3.1415926;

//创建Circle
class Circle 
{
    //访问权限
        //公共权限
public:

    //属性(半径)
    int m_r;
    
    //行为(获取圆周长)
    double calculateZC()
    {
        return 2 * PI * m_r;
    }
};

int main(int argc, char const *argv[])
{
    //根据Circle类创建具体的对象
    Circle c1;
    //给对象c1的属性 m_r 进行赋值
    c1.m_r = 10;
    cout << "perimeter of c1: " << c1.calculateZC() << endl;
    return 0;
}

