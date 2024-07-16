// 作用：结构体中的成员可以是另一个结构体
// 例如：每个老师辅导一个学员，一个老师的结构体中，记录一个学生的结构体

#include <iostream>
#include <string>
using namespace std;

//结构体嵌套结构体

// 先定义学生结构体
struct Student
{
    string name;
    int age;
    int score;
};
//再定义老师结构体
struct Teacher
{
    int id;
    string name;
    int age;
    struct Student stu;
};




int main(int argc, char const *argv[])
{
    //结构体嵌套结构体
    ///创建老师
    Teacher t1;
    t1.id = 1000;
    t1.name = "jim";
    t1.age = 50;
    t1.stu.name = "zhang sam";
    t1.stu.age = 17;
    t1.stu.score = 95;
    cout << "teach id:" << t1.id << endl;
    cout << "teach name:" << t1.name << endl;
    cout << "teach age:" << t1.age << endl;
    cout << "teach stu.name:" << t1.stu.name << endl;
    cout << "teach stu.age:" << t1.stu.age << endl;
    cout << "teach stu.score:" << t1.stu.score << endl;

    return 0;
}
