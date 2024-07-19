#include <iostream>
#include <string>
#include <ctime>
using namespace std;
/*
继承的语法:class子类:继承方式 父类

父类的私有内容,子类以任何继承方式都无法访问

继承方式一共有三种:
    ·公共继承 public       父类的保护,公共 内容不变
    ·保护继承 protected    父类的保护,公共 内容变为保护
    ·私有继承 private      父类的保护,公共 内容变为私有
*/

//公共继承
class Base1
{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class Son : public Base1
{
public:
    void func()
    {
        cout << "father's public m_A : " << m_A << endl; //父类中的公共权限成员到子类中依然是公共权限:
        cout << "father's protected m_B: " << m_B << endl; ////父类中的保护权限成员到子类中依然是保护权限
        // cout << "father's private m_C" << m_C << endl; //error: 'int Base1::m_C' is private within this context //父类中的私有权限成员子类访问不到
    }
};

void test01()
{
    Son s1;
    s1.func();
}


// 保护继承 
class Base2
{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};
class Son2 : protected Base2
{
public:
    void func()
    {
        m_A = 10;
        m_B = 10;
        cout << "father's public m_A : " << m_A << endl; //父类中的公共权限成员到子类中是保护权限:
        cout << "father's protected m_B: " << m_B << endl; ////父类中的保护权限成员到子类中依然是保护权限
        // cout << "father's private m_C" << m_C << endl; //error: 'int Base1::m_C' is private within this context //父类中的私有权限成员子类访问不到
    }
};
void test02()
{
    Son2 s1;
    s1.func();
    // cout << "s1.m_A =  " << s1.m_A << endl; //类外无法访问保护属性
    // cout << "s1.m_B =  " << s1.m_B << endl; //类外无法访问保护属性

}


//私有继承
class Base3
{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};
class Son3 : private Base3
{
public:
    void func()
    {
        m_A = 10;
        m_B = 10;
        cout << "father's public m_A : " << m_A << endl;   //父类中的公共权限成员到子类中是私有权限:
        cout << "father's protected m_B: " << m_B << endl; //父类中的保护权限成员到子类中依然是私有权限
        // cout << "father's private m_C" << m_C << endl; //error: 'int Base1::m_C' is private within this context //父类中的私有权限成员子类访问不到
    }
};
void test03()
{
    Son2 s1;
    s1.func();
    // cout << "s1.m_A =  " << s1.m_A << endl; //类外无法访问私有属性
    // cout << "s1.m_B =  " << s1.m_B << endl; //类外无法访问私有属性

}


int main(int argc, char const *argv[])
{
    // test01();
    // test02();
    test03();
    return 0;
}


