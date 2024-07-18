#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// 2.类做友元

class Building;

class GoodGuy
{
public:
    GoodGuy();// 构造函数赋初值
    void visit();//visit 函数 访问Building中的属性
    Building * building;
};


class Building
{
    friend class GoodGuy; // GoodGuy类 是Building类的friend

private:
    string m_BedRoom; // 卧室

public:
    string m_SittingRoom; //客厅

    Building(); // 构造函数赋初值
    
};


//类外写成员函数
Building::Building()
{
    m_SittingRoom = "客厅";
    m_BedRoom = "卧室";
    cout << " 类外写成员函数 Building 构造函数调用" << endl;
}

GoodGuy::GoodGuy()
{
    //创建Building对象 存放在堆区
    building = new Building;
}

void GoodGuy::visit()
{
    cout << "好基友class正在访问 : " << building->m_SittingRoom << endl;
    cout << "好基友class正在访问 : " << building->m_BedRoom << endl; //error: 'std::__cxx11::string Building::m_BedRoom' is private within this context
}


void test01()
{
    GoodGuy gg;
    gg.visit();
}


int main(int argc, char const *argv[])
{
    test01();
    return 0;
}

