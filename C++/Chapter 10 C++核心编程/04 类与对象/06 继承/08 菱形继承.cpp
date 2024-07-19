#include <iostream>
#include <string>
#include <ctime>
using namespace std;

/*
     [动物]
   /       \
 [羊]      [骆]
   \       /
     [羊驼]

菱形继承概念:
    两个派生类继承同一个基类
    又有某个类同时继承者两个派生类
    这种继承被称为菱形继承,或者钻石继承
*/

// 菱形继承问题:
// 1.羊继承了动物的数据,驼同样继承了动物的数据,当羊驼使用数据时,就会产生二义性.
// 2.羊驼继承自动物的数据继承了两份,其实我们应该清楚,这份数据我们只需要一份就可以.

// 利用虚继承解决菱形继承问题, 继承前加上关键字 virtual
// 最大的Animal类称为虚基类
// 本质是vbptr:虚基类指针,指向vbtable



class Animal
{
public:
    int m_Age;
};




class Sheep : virtual public Animal //继承前加上关键字 virtual
{

};

class Camel : virtual public Animal //继承前加上关键字 virtual
{

};

class SheepCamel : public Sheep, public Camel
{

};

void test01()
{
    SheepCamel sc;
    // sc.m_Age = 19; // error: request for member 'm_Age' is ambiguous
    sc.Sheep::m_Age = 19; 
    sc.Camel::m_Age = 28;
    // 当菱形继承,两个父类拥有相同数据,需要加以作用域区分
    cout << "sc.Sheep::m_Age: " << sc.Sheep::m_Age << endl;
    cout << "sc.Camel::m_Age: " << sc.Camel::m_Age << endl;
    cout << "sc.m_Age: " << sc.m_Age << endl; //使用虚继承后,正常输出 sc.m_Age: 28
    // 菱形继承 导致数据有两份,资源浪费
    cout << "&sc:" << &sc << endl;

}


int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
