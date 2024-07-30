#include <iostream>
#include <string>
#include <ctime>
#include "MyArray.hpp"
using namespace std;
/*
案例描述:实现一个通用的数组类,要求如下:
    ·可以对内置数据类型以及自定义数据类型的数据进行存储
    ·将数组中的数据存储到堆区
    ·构造函数中可以传入数组的容量
    ·提供对应的拷贝构造函数以及operator=防止浅拷贝问题
    ·提供尾插法和尾删法对数组中的数据进行增加和删除
    ·可以通过下标的方式访问数组中的元素
    ,可以获取数组中当前元素个数和数组的容量
*/
void printIntArray(MyArray <int>& array)
{
    for (int i = 0; i < array.getSize(); i++)
    {
        cout << array[i] << endl;
    }
    
}

void test01()
{
    MyArray <int>arr1(5);
    MyArray <int>arr2(arr1);
    MyArray <int>arr3(100);
    arr3 = arr1;
}


void test02()
{
    MyArray <int>arr1(5);
    for (int i = 0; i < 5; i++)
    {
        arr1.Push_Back(i);//尾插法向数组中插入数据
    }
    cout << "arr1: " << endl;
    
    printIntArray(arr1);
    cout << "size of arr1: "<< arr1.getSize() << endl;
    cout << "capacity of arr1: "<< arr1.getCapacity() << endl;


    MyArray <int>arr2(arr1);
    cout << "arr2: " << endl;
    printIntArray(arr2);

    //尾删
    cout << "-----------------" << endl;
    arr2.Pop_Back();
    cout << "size of arr2: "<< arr2.getSize() << endl;
    cout << "capacity of arr2: "<< arr2.getCapacity() << endl;

}

class Person
{
public:
    string m_Name;
    int m_Age;
    Person() {}; //默认构造
    Person(string name, int age)//有参构造
    {
        this->m_Name = name;
        this->m_Age = age;
    }
};

void printPersonArray(MyArray<Person>& arr)
{
    for (int i = 0; i < arr.getSize(); i++)
    {
        cout << "name : " << arr[i].m_Name << "\t age: " << arr[i].m_Age << endl;
    }
    
}


//自定义数据类型
void test03()
{
    MyArray<Person> arr(10);
    Person p1("jim",15);
    Person p2("bob",25);
    Person p3("mike",20);
    Person p4("tony",30);
    Person p5("alan",19);

    //将数据插入到数组中
    arr.Push_Back(p1);
    arr.Push_Back(p2);
    arr.Push_Back(p3);
    arr.Push_Back(p4);
    arr.Push_Back(p5);
    printPersonArray(arr);
    cout << "size of arr: "<< arr.getSize() << endl;
    cout << "capacity of arr: "<< arr.getCapacity() << endl;

}


int main(int argc, char const *argv[])
{

    // test01();
    // test02();
    test03();
    return 0;
}




