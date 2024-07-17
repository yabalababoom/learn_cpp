#include <iostream>
#include <string>
#include <ctime>
using namespace std;


// 在C++中struct和class唯一的区别就在于默认的访问权限不同
// 区别:
    // ·struct默认权限为公共
    // ·class 默认权限为私有

class C1
{
    int m_A; //默认权限为私有
};

struct C2
{
    int m_A; //struct默认权限为公共
};


int main(int argc, char const *argv[])
{
    // 访问class的属性
    C1 c1;
    // c1.m_A = 100;
    // cout << "class C1 c1:" << c1.m_A << endl; // error: 'int C1::m_A' is private within this context

    //访问struct的属性
    C2 c2;
    c2.m_A = 100;
    cout << "class C2 c2:" << c2.m_A << endl; //class C2 c2:100

    return 0;
}
