#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include "point.h"  //circle类中包含了point类
using namespace std;

class Circle
{
private:
    //半径
    int m_R;
    Point m_Center; //在类中,可以让另一个类作为本类的成员

public:
    //设置半径
    void setR(int r);

    //获取半径
    int getR();

    //设置圆心
    void setCenter(Point center);

    //获取圆心
    Point getCenter();

};
