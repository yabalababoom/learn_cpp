//作用：通过指针访问结构体中的成员
//利用操作符->可以通过结构体指针访问结构体属性


#include <iostream>
#include <string>
using namespace std;
// 结构体指针

// 定义学生结构体
struct Student
{
    string name;
    int age;
    int score;
};

int main(int argc, char const *argv[])
{
    //1. 创建学生结构体变量
    struct Student stu1 =
        {
            "张三",
            18,
            96
        };

    // 2. 通过指针指向结构体变量
    struct Student *p = &stu1;

    //3. 通过指针访问结构体变量中的数据
    //3.1 直接通过stu1.name 访问
    // cout << stu1.name << endl;
    //3.2 通过 -> 访问
    cout << p->name << endl;
    cout << p->age << endl;
    cout << p->score << endl;

    return 0;
}

