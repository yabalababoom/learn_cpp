#include <iostream>
#include <string>
#include <ctime>
using namespace std;

//多态的原理
/*
加上virtual后, Animal内部有一个vfptr(virtual function pointer,虚函数(表)指针) 指向 vftable(virtual function table,虚函数表),
表内记录了虚函数的地址

当子类重写父类的虚函数, 子类中的虚函数表, 内部自动,  会替换成,  子类的虚函数地址

当父类的指针或者引用指向子类对象时候,发生多态

*/


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
    //重写  函数返回值类型  函数名参数列表 完全相同
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


void test02()
{
    cout << "sizeof(Animal) : " << sizeof(Animal) << endl; // 有virtual: sizeof(Animal) : 8 ;  无virtual sizeof(Animal) : 1
}


int main(int argc, char const *argv[])
{
    // test01();
    test02(); 
    return 0;
}
