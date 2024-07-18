#include <iostream>
#include <string>
#include <ctime>
using namespace std;

/*
深浅拷贝是面试经典问题,也是常见的一个坑
    浅拷贝:简单的赋值拷贝操作
    深拷贝:在堆区重新申请空间,进行拷贝操作
*/

//浅拷贝带来的问题: 堆区的内容重复释放
//解决:利用深拷贝, 重新在堆区创建内存

//总结:如果属性有在堆区开辟的,一定要自己提供拷贝构造函数,防止浅拷贝带来的问题




class Person
{
private:
    /* data */
public:
    int m_Age;

    int *m_Hight; //指针指向变量身高

    Person()
    {
        cout << "Person 默认(无参)构造函数的调用" << endl;
    };
    Person (int age, int height)
    {
        m_Age = age;
        m_Hight = new int(height); //用new将height创建到堆区,返回的是int *,因此m_Hight是指针(利用new创建的数据,会返回该数据对应的类型的指针)
        cout << "Person 有参构造函数的调用" << endl;
        
    }
    //自己实现拷贝构造函数的,解决浅拷贝的问题
    Person (const Person &p)
    {
        cout << "Person 拷贝构造函数的调用" << endl;
        m_Age = p.m_Age;
        // m_Hight = p.m_Hight;//编译器默认实现这行代码
        m_Hight = new int(*p.m_Hight);
    }

    ~Person()
    {
        //析构代码,将堆区开辟数据做释放操作
        if (m_Hight != NULL)
        {
            delete m_Hight;
            m_Hight = NULL; //防止野指针的出现,指向NULL
        }
        
        cout << "Person 析构函数的调用" << endl;
    };
};

void test01()
{
    Person p1(18,160); //Person 默认(无参)构造函数的调用

    cout << "age of p1:" << p1.m_Age << endl; //age of p2:18 
    cout << "height of p1:" << p1.m_Hight << endl; 
    cout << "height of p1:" << *p1.m_Hight << endl;  //height of p1:160

    Person p2(p1); //浅拷贝, 输出只有一次析构函数的调用
    cout << "age of p2:" << p2.m_Age << endl; //age of p2:18 ,编译器默认用浅拷贝进行赋值
    cout << "height of p2:" << p2.m_Hight << endl; 
    cout << "height of p2:" << *p2.m_Hight << endl;  //height of p2:160
}

void test02()
{
    Person p1(18,160); //Person 默认(无参)构造函数的调用

    cout << "age of p1:" << p1.m_Age << endl; //age of p2:18 
    cout << "height of p1:" << p1.m_Hight << endl;  //height of p1:0x2666c60
    cout << "height of p1:" << *p1.m_Hight << endl;  //height of p1:160

    Person p2(p1);  // 用自己实现拷贝构造函数的,解决浅拷贝的问题; 输出两次析构函数调用
    cout << "age of p2:" << p2.m_Age << endl; //age of p2:18 ,编译器默认用浅拷贝进行赋值
    cout << "height of p2:" << p2.m_Hight << endl;  //height of p2:0x2666c80, 两次的地址不同
    cout << "height of p2:" << *p2.m_Hight << endl;  //height of p2:160
}





int main(int argc, char const *argv[])
{
    test02();
    return 0;
}


