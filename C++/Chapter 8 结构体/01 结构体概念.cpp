//基本概念: 属于用户自定义的数据类型,允许用户存储不同的数据类型

// 定义语法: struct 结构体名 {结构体成员列表};
/*
    创建方式:
        1. struct 结构体名 变量名;
        2. struct 结构体名 变量名 = {成员1, 成员2...}
        3. 定义结构体时顺便创建变量 (不推荐使用)
*/


#include <iostream>
#include <string>
using namespace std;

// 1.创建学生数据类型
struct Student
{
    //成员信息列表

    //姓名
    string name;
    //年龄
    int age;
    //分数
    int score;
};



int main()
{
    // 2.通过学生类型创建具体的学生
    // 2.1 struct Student stu1;
    struct Student stu1;
    stu1.name = "zhang san";
    stu1.age = 18;
    stu1.score = 98;
    cout << "name:" << stu1.name << endl;
    cout << "age:" << stu1.age << endl;
    cout << "score:" << stu1.score << endl;
    
    // 2.2 struct Student stu2 = {...};
    struct Student stu2 = {"李四",19,99};
    cout << "name:" << stu2.name << endl;
    cout << "age:" << stu2.age << endl;
    cout << "score:" << stu2.score << endl;

    // 2.3 定义结构体时顺便创建变量
    struct Student
    {
        //成员列表

        //姓名
        string name;
        //年龄
        int age;
        //分数
        int score;
    } stu3;
    stu3.name = "wang wu";
    stu3.age = 17;
    stu3.score = 90;
    
    return 0;
} 