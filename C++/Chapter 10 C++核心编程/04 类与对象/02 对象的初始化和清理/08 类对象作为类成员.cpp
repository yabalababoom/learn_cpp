//C++类中的成员可以是另一个类的对象,我们称该成员为对象成员

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// B类中有对象A作为成员,A为对象成员,那么当创建B对象时,A与B的构造和析构的顺序是谁先谁后?
// 答:先有A构造,再有B构造; 先有B析构,再有A析构

class Phone
{
public:
    Phone(string pName) //构造函数对class进行初始化操作
    {
        m_PName = pName;
        cout << "Phone 的构造函数的调用" << endl;
    }
    string m_PName;

    ~Phone()
    {
        cout << "Phone 的析构函数的调用" << endl;
    }
};




class Person
{
public:
    //Phone m_Phone = pName  隐式转换法
    Person(string name , string pName):m_Name(name),m_Phone(pName)
    {
        cout << "Person 的构造函数的调用" << endl;
    } 
    string m_Name;
    Phone m_Phone;
    ~Person()
    {
        cout << "Person 的析构函数的调用" << endl;
    }

};



void test01()
{
    Person p("jim", "apple m1");
    cout << "name: " << p.m_Name << endl;
    cout << "phone: " << p.m_Phone.m_PName << endl;
}






int main(int argc, char const *argv[])
{
    test01();
    return 0;
}




