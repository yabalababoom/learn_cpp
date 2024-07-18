#include <iostream>
#include <string>
#include <ctime>
using namespace std;
/*
生活中你的家有客厅(Public),有你的卧室(Private)
客厅所有来的客人都可以进去,但是你的卧室是私有的,也就是说只有你能进去
但是呢,你也可以允许你的好闺蜜好基友进去.

在程序里,有些私有属性也想让类外特殊的一些函数或者类进行访问,就需要用到友元的技术

友元的目的就是让一个函数或者类访问另一个类中私有成员

友元的关键字为 friend

友元的三种实现
    1.全局函数做友元
    2.类做友元
    3.成员函数做友元
*/



// 1.全局函数做友元


class Building
{
private:
    string m_BedRoom; // 卧室

public:
    string m_SittingRoom; //客厅
    
    Building() //构造函数
    {
        m_SittingRoom = "客厅";
        m_BedRoom = "卧室";
        cout << "Building 构造函数调用" << endl;
    }

};


//全局函数
void goodGay(Building &building)
{
    cout << "好基友的全局函数正在访问 : " << building.m_SittingRoom << endl;
}


void  test01()
{
    Building building;
    goodGay(building);
}

int main()
{
    test01();
    return 0;
}









int main(int argc, char const *argv[])
{
    
    
    return 0;
}


