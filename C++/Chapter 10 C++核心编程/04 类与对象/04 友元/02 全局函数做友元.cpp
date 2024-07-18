#include <iostream>
#include <string>
#include <ctime>
using namespace std;
// 1.全局函数做友元


class Building
{
friend void goodGay(Building &building);// goodGay:全局函数是Building好朋友,可以访问Building中私有成员

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
    cout << "好基友的全局函数正在访问 : " << building.m_BedRoom << endl; //error: 'std::__cxx11::string Building::m_BedRoom' is private within this context
}




void  test01()
{
    Building building;
    goodGay(building); //引用
}



int main(int argc, char const *argv[])
{
    
    test01();
    return 0;
}


