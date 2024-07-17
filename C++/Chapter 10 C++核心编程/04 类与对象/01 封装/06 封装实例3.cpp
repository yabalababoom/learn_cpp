// 练习案例1:设计立方体类
// 设计立方体类(Cube)
// 求出立方体的面积和体积
// 分别用全局函数和成员函数判断两个立方体是否相等.

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

//创建Cube类
class Cube
{
    //设计私有属性
private:
    int m_L=0, m_W=0, m_H=0;

public:
    //长
    void setLong (double l)
    {
        m_L = l;
    }
    double getLong()
    {
        return m_L;
    }
    //宽
    void setWidth (double w)
    {
        m_W = w;
    }
    double getWidth()
    {
        return m_W;
    }
    //高
    void setHigth (double h)
    {
        m_H = h;
    }
    double getHigth()
    {
        return m_H;
    }
    //面积
    double get_Area()
    {
        return 2 * ((m_L * m_W) + (m_L * m_H) + (m_W * m_H));
    }
    //体积
    double get_Volume()
    {
        return m_L * m_W * m_H;
    }

    //2. 利用成员函数判断两个立方体是否相等
    bool is_Same_class(Cube &c) //用已知的与未知的进行比较
    {
        if (m_L == c.getLong() && m_W == c.getWidth() && m_H == c.getHigth()) 
        {
            return true;
        }
    
        return false;
    }
};




//1 利用全局函数判断两个立方体是否相等
bool is_Same(Cube &c1, Cube &c2)
{
    if (c1.getLong() == c2.getLong() && c1.getWidth() == c2.getWidth() && c1.getHigth() == c2.getHigth()) 
    {
        return true;
    }
    
    return false;
    
}

int main(int argc, char const *argv[])
{
    Cube c1;
    c1.setHigth(10);
    c1.setLong(10);
    c1.setWidth(10);
    cout << "c1 area: " << c1.get_Area() << endl;
    cout << "c1 volume: " << c1.get_Volume() << endl;


    Cube c2;
    c2.setHigth(10);
    c2.setLong(10);
    c2.setWidth(20);
    cout << "c2 area: " << c2.get_Area() << endl;
    cout << "c2 volume: " << c2.get_Volume() << endl;

    bool res = is_Same(c1, c2);
    res == true ? cout << "equal" << endl : cout << "not equal" << endl;
    bool res_2 = c1.is_Same_class(c2);
    res_2 == true ? cout << "class equal" << endl : cout << "class not equal" << endl;
    return 0;
}

