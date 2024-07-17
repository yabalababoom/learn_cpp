// 练习案例2:点和圆的关系
// 设计一个圆形类(Circle),和一个点类(Point),计算点和圆的关系.
//点在圆外,上,内  做法:将点到圆心的距离与半径进行比较, 计算坐标(x,y) 公式:两点间的距离


#include <iostream>
#include <string>
#include <ctime>
#include "point.h"  
#include "circle.h"
using namespace std;


//设置x坐标
void Point::setX(int x)
{
    m_X = x;
}

//获取x坐标
int Point::getX()
{
    return m_X;
}
//设置y坐标
void Point::setY(int y)
{
    m_Y = y;
}
//获取y坐标
int Point::getY()
{
    return m_Y;
}





//设置半径
void Circle::setR(int r)
{
    m_R = r;
}
//获取半径
int Circle::getR()
{
    return m_R;
}
//设置圆心
void Circle::setCenter(Point center)
{
    m_Center = center;
}
//获取圆心
Point Circle::getCenter()
{
    return m_Center;
}



//判断点与圆的关系
void isInCircle(Circle &c, Point &p)
{
    // 计算两点之间的距离 平方
    int distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
        (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
    //计算半径的平方
    int rDistance = c.getR() * c.getR();
    if (distance == rDistance) 
    {
        cout << "point on circle" << endl;
    } 
    else if (distance > rDistance)
    {
        cout << "point out circle" << endl;
    }
    else if (distance < rDistance)
    {
        cout << "point in circle" << endl;
    }
    
}


int main(int argc, char const *argv[])
{
    //创建circle
    Circle c1;
    //设置半径
    c1.setR(10);
    //设置圆心
    Point center;
    center.setX(10);
    center.setY(0);
    c1.setCenter(center);
    //创建point
    Point p1;
    p1.setX(10);
    p1.setY(10);

    isInCircle(c1, p1);

    return 0;
}
