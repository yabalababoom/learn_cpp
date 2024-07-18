#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// 3.成员函数做友元

class Building;

class GoodGuy
{
public:
    GoodGuy();// 构造函数赋初值
    void visit(); //visit 成员函数 访问Building中的私有属性
    void visit2(); //visit2 成员函数 不可访问Building中的私有属性
    Building * building;
};

class Building
{
    friend void GoodGuy::visit();//告诉编译器GoodGay类下的visit成员函数作为本类的好朋友,可以访问私有成员
private:
    string m_BedRoom; // 卧室
public:
    string m_SittingRoom; //客厅
    Building(); // 构造函数赋初值
};

//类外实现成员函数
Building::Building()
{
    m_SittingRoom = "客厅";
    m_BedRoom = "卧室";
    cout << " 类外成员函数 Building 构造函数调用" << endl;
}

GoodGuy::GoodGuy()
{
    //创建Building对象 存放在堆区
    building = new Building;
}

void GoodGuy::visit()
{
    cout << "visit函数正在访问 : " << building->m_SittingRoom << endl;
    cout << "visit函数正在访问 : " << building->m_BedRoom << endl;
}
void GoodGuy::visit2()
{
    cout << "visit2函数正在访问 : " << building->m_SittingRoom << endl;
    // cout << "visit2函数正在访问 : " << building->m_BedRoom << endl;
}


void test01()
{
    GoodGuy gg;
    gg.visit();
    gg.visit2();
}


int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
