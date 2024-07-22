#include <iostream>
#include <string>
#include <ctime>
using namespace std;


/*
多态使用时,如果子类中有属性开辟到堆区,那么父类指针在释放时无法调用到子类的析构代码
解决方式:将父类中的析构函数改为虚析构或者纯虚析构

虚析构和纯虚析构共性:
    ·可以解决父类指针释放子类对象
    ·都需要有具体的函数实现

虚析构和纯虚析构区别:
    ·如果是纯虚析构,该类属于抽象类,无法实例化对象

虚析构语法:
    virtual ~类名(){}
纯虚析构语法:
    virtual ~类名() = 0;
    类名::类名(){}

*/


class Animal
{
private:
    /* data */
public:
    // 纯虚函数
    virtual void speak() = 0;
    Animal()
    {
        cout << "Animal 构造函数调用" << endl;
    }
    // virtual ~Animal() //加入关键字 virtual,称为虚析构, 解决父类指针释放子类对象不干净的问题
    // {
    //     cout << "Animal 析构函数调用" << endl;
    // }
    virtual ~Animal() = 0; //纯虚析构, 也能解决父类指针释放子类对象不干净的问题,此处声明, 需要实现
};

Animal:: ~Animal() //纯虚析构 需要实现
{
    cout << "Animal 纯析构函数调用" << endl;
}


class Cat : public Animal
{
public:
    Cat(string  name) //构造函数
    {
        cout << "Cat 构造函数调用" << endl;
        m_Name = new string(name); //堆区创建的string应该释放
    }
    ~Cat() 
    {
        if (m_Name != NULL)
        {
            cout << "Cat 析构函数调用" << endl;
            delete m_Name;
            m_Name = NULL;
        }
        
    }
    virtual void speak()
    {
        cout << *m_Name << " speaking " << endl;
    }
    string *m_Name;
};

void test01()
{
    Animal *animal = new Cat("Tom"); //父类指针在析构时候不会调用子类中析构函数,导致子类如果有堆区属性,出现内存泄露
    animal->speak();
    delete animal;
}

int main(int argc, char const *argv[])
{
    test01();
    system("pause");
    return 0;
}
