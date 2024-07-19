#include <iostream>
#include <string>
#include <ctime>
using namespace std;

/*4.5.4赋值运算符重载
  C++编泽器至少给一个类添加4个函数
    1.默认构造函数(无参,函数体为空)
    2.默认析构函数(无参,函数体为空)
    3.默认拷贝构造函数,对属性进行值拷贝
    4.赋值运算符operator=,对属性进行值拷贝

如果类中有属性指向堆区,做赋值操作时也会出现深浅拷贝问题

*/
class Person
{
private:
    /* data */
public:
    int *m_Age;
    Person(int age) //传入的数据int 18 存在堆区
    {
        m_Age = new int(age); //new 返回的是堆区的内存地址,由m_Age指向
    }
    ~Person()
    {
        if (m_Age != NULL) // 当使用析构函数手动释放堆区内存时,会引起堆区内存重复释放而导致程序崩溃,因此需要重载=运算符做深拷贝
        {
            delete m_Age;
            m_Age = NULL;
        }
    }
    //重载赋值运算符
    Person& operator=(Person &p)   //p2 = p1;
    {
        //1. 编译器提供的是浅拷贝方式
        // m_Age = p.m_Age;

        //2. 正确的做法时:应该先判断是否有属性在堆区,如果有先释放干净,然后再深拷贝
        if (m_Age != NULL) 
        {
            delete m_Age;
            m_Age = NULL;
        }
        m_Age = new int(*p.m_Age);

        //返回对象本身
        return *this;
    }
};



void test01()
{
    Person p1(18);
    Person p2(28);
    Person p3(38);
    // p2 = p1; // 默认赋值是浅拷贝, 当手动释放堆区内存时会出现重复释放而崩溃
    p3 = p2 = p1;
    cout << "p1.m_Age: " << * p1.m_Age << endl;
    cout << "p2.m_Age: " << * p2.m_Age << endl;
    cout << "p3.m_Age: " << * p3.m_Age << endl;
}

int main(int argc, char const *argv[])
{
    test01();
    // int a = 10;
    // int b = 20;
    // int c = 30;
    // c = b = a;
    // cout << "a " << a << endl;
    // cout << "b " << b << endl;
    // cout << "c " << c << endl;
    system("pause");
    return 0;
}
