#include <iostream>
#include <string>
#include <ctime>
using namespace std;
/*
4.2.2构造函数的分类及调用

两种分类方式:
        按参数分为:有参构造(默认构造)和 无参构造
        按类型分为:普通构造和 拷贝构造
三种调用方式:
    括号法
    显示法
    隐式转换法
*/
class Person
{

public:
    //按参数分为:
    Person() //无参构造函数,也叫默认构造
    {
        cout << "Person 无参构造函数的调用" << endl;
    }

    Person(int a) //有参构造函数
    {
        age = a;
        cout << "Person 有参构造函数的调用" << endl;
    }


    //按类型分为 
    Person( const Person &p ) //拷贝构造函数,拷贝一个出来,必须是const修饰, 引用调用,其余都是普通构造
    {
        //将传入的p中的属性拷贝到当前类身上
        age = p.age;
        cout << "Person 拷贝构造函数的调用" << endl;
    }



    int age = -1;

    ~Person()//析构函数
    {
        cout << "Person 析构函数的调用" << endl;
    }
};


//调用
void test01()
{
    // 括号法 (推荐使用)
    // Person p1; //output:无参(默认)构造函数的调用
    // Person p2(10); //output:有参构造函数的调用
    // Person p3(p2); //output:拷贝构造函数的调用
    // cout << "age of p2:" << p2.age << endl;
    // cout << "age of p3:" << p3.age << endl; //p3 拷贝了 p2的属性
    //注意
    // 1.调用默认构造函数时, 不要加(),下面这行代码, 编译器会认为这是函数的声明,不会认为是在创建对象
        // Person p4();



    // 显示法
    // Person p1; //output:无参构造函数的调用
    // Person p2 = Person(10); //output:有参构造函数的调用
    // Person p3 = Person(p2); //output:拷贝构造函数的调用
    // // Person(10); // 单独写时叫匿名对象, 当前行执行结束后,系统立即回收匿名对象, 输入先调用有参构造函数,立即调用析构函数
    
    // //注意
    // // 2.不要利用拷贝构造函数 初始化匿名对象
    // Person(p3); // 编译器认为 Person(p3); 等价于 Person p3;相当于创建对象p3, 重定义了

    // 隐式转换法
    Person p4 = 10; // 相当于Person p4 = Person(10); output:有参构造函数的调用
    Person p5 = p4; //output:拷贝构造函数的调用
}





int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
