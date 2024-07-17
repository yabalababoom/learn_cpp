#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// 封装意义二:
// 类在设计时,可以把属性和行为放在不同的权限下,加以控制
// 访问权限有三种:
    // 1. public 公共权限,    成员  类中可以访问,类外可以访问
    // 2. protected 保护权限  成员  类中可以访问,类外不可以访问(子类可以访问父类的保护内容)
    // 3. private 私有权限    成员  类中可以访问,类外不可以访问(子类不可以访问父类的保护内容)

class Person
{

public:
    string m_Name;

protected:
    string m_Car;

private:
    int m_Password;

public:
    void func()
    {
        m_Name = "jimmy";
        m_Car = "benz";
        m_Password = 12526362;
    }
    void showInfo()
    {
        cout << "name: " << m_Name << endl;
        cout << "car: " << m_Car << endl;
        cout << "passwd: " << m_Password << endl;
    }

};






int main(int argc, char const *argv[])
{
    Person p1;
    p1.m_Name = "bob";
    // p1.m_Car = "toyota";  //string Person::m_Car' is protected within this context
    p1.showInfo(); // name: bob  ;car:  空; passwd: 0  :无法访问protected, private 信息
    return 0;
}
