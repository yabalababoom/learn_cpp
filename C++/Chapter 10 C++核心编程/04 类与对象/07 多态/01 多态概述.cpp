#include <iostream>
#include <string>
#include <ctime>
using namespace std;

/*
多态是C+面向对象三大特性之一
多态分为两类
    1.静态多态:"函数重载"和"运算符重载"属于静态多态, 复用函数名
    2.动态多态:派生类和虚函数实现运行时多态(大部分是指动态多态)
静态多态和动态多态区别:
    2.静态多态的函数地址早绑定 - 编译阶段确定函数地址
    1.动态多态的函数地址晚绑定 - 运行阶段确定函数地址
*/

// 动态多态满足条件:
//1. 有继承关系
//2. 子类重写父类的虚函数(如speak()函数的),子类的virtual可写可不写

// 动态多态的使用
//父类的指针或引用  执行子类对象  Animal &animal = cat/dog


class Animal
{
public:
    //加上virtual表示虚函数, 实现地址晚绑定 
    virtual void speak()
    {
        cout << "animal speaking" << endl;
    }
};

class Cat : public Animal
{

public:
    void speak()
    {
        cout << "Cats speaking" << endl;
    }
};


class Dog : public Animal
{
public:
    void speak()
    {
        cout << "dogs speaking" << endl;
    }
};

//地址早绑定,在编译阶段就确定了函数的地址
//如果想执行cat speak,这个函数的地址就不能提前绑定,需要在运行阶段绑定,也就是地址晚绑定
void doSpeak(Animal &animal) //Animal &animal = cat
{
    animal.speak();
}


void test01()
{
    Cat cat;
    Dog dog;
    doSpeak(cat);//本意是想执行cat speak
    doSpeak(dog);
}


int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
