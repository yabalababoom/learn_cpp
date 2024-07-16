/*
作用：将结构体作为参数向函数中传递
传递方式有两种：
    ·值传递
    ·地址传递
*/

#include <iostream>
#include <string>
using namespace std;


//定义学生结构体
struct Student
{
    string name;
    int age;
    int score;
};


// 1.值传递
void printInfo1(struct Student s1)
{
    cout << "函数1中 &s1:" << &s1 << endl;
    s1.age = 1000;
    cout << "函数1中: name:" << s1.name << "  age:" << s1.age << "  score:" << s1.score << endl;
}

// 2. 地址传递
void printInfo2(struct Student * p)
{
    cout << "函数2中 &p:" << p << endl;
    p->age = 1000;
    cout << "函数2中: name:" << p->name << "  age:" << p->age << "  score:" << p->score << endl;
}


int main(int argc, char const *argv[])
{
    //结构体作为函数参数
    //将学生传入到一个参数中,打印学生的所有信息
    struct Student s1 = {"jimmy", 18, 90};

    cout << "主函数中name:" << s1.name << "  age:" << s1.age << "  score:" << s1.score << endl;
    cout << "main中 &s1:" << &s1 << endl;
    cout << "sizeof s1:" << sizeof(s1) << endl; // 40
    cout << "sizeof s1:" << sizeof(s1.name) << endl; //32
    cout << "sizeof s1:" << sizeof(s1.age) << endl; //4
    cout << "sizeof s1:" << sizeof(s1.score) << endl; //4
    //定义打印信息的函数
    printInfo1(s1); // 1.值传递 不会改变主函数中信息
    cout << "主函数中name:" << s1.name << "  age:" << s1.age << "  score:" << s1.score << endl;
    printInfo2(&s1);  // 2. 地址传递 改变主函数中信息
    cout << "主函数中name:" << s1.name << "  age:" << s1.age << "  score:" << s1.score << endl;

    return 0;
}
