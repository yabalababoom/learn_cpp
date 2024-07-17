#pragma once
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

//只做成员函数的声明

class Point
{
private:
    int m_X;
    int m_Y;

public:
    //设置x坐标
    void setX(int x);

    //获取x坐标
    int getX();

    //设置y坐标
    void setY(int y);

    //获取y坐标
    int getY();
};
