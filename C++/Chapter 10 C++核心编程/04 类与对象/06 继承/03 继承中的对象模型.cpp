#include <iostream>
#include <string>
#include <ctime>
using namespace std;

//问题:从父类继承过来的成员,哪些属于子类对象中?

class Base
{
public:
    int m_A;
    void func()
    {
        cout << "&m_A: " << (long long)&m_A << endl;
        cout << "&m_B: " << (long long)&m_B << endl;
        cout << "&m_C: " << (long long)&m_C << endl;
    }
protected:
    int m_B;
private:
    int m_C; //私有成员只是被隐藏了,但是还是会继承下去
};

//公共继承
class Son : public Base
{
public:
    int m_D;
};

void test01()
{
    Son s1;
    s1.func();
    cout << "&s1.m_D: " << (long long)&s1.m_D << endl;
    cout << "&s1: " << (long long)&s1 << endl;
    
    cout << "size of s1: " << sizeof(s1) << endl; // 16 字节=4*4字节
    /*
    &m_A: 6421968
    &m_B: 6421972
    &m_C: 6421976
    &s1.m_D: 6421980
    &s1: 6421968
    size of s1: 16
    */
    
}


int main(int argc, char const *argv[])
{
    test01();
    return 0;
}



