//作用 :使用const 防止误操作

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
    cout << "函数1中 &s1:" << &s1 << endl; //&s1:0x62fde0
    cout << "函数1中 name:" << s1.name << "  age:" << s1.age << "  score:" << s1.score << endl;
}


// 2. 地址传递
void printInfo2(struct Student * p)
{
    cout << "函数2中 &p:" << p << endl;
    p->age = 1000;//可以修改,更改了结构体中的数据
    cout << "函数2中: name:" << p->name << "  age:" << p->age << "  score:" << p->score << endl;
}

// 3. 地址传递(使用const修饰,不允许修改数据,防止误操作)
void printInfo3(const struct Student * p)
{
    cout << "函数2中 &p:" << p << endl;
    // p->age = 1000; //error: assignment of member 'Student::age' in read-only object
    cout << "函数2中: name:" << p->name << "  age:" << p->age << "  score:" << p->score << endl;
}


int main(int argc, char const *argv[])
{
    struct Student s1 = {"jimmy", 18, 90};
    cout << "main中 &s1:" << &s1 << endl; //&s1:0x62fdb0
    //通过函数打印结构体信息
    printInfo1(s1); // 值传递,函数中会复制一份数据,缺点:当数据量巨大时,占用内存空间大

    printInfo2(&s1); // 地址传递,指针占用4字节,节省内存空间,不复制数据;缺点:函数中可能更改数据

    printInfo3(&s1); //为了防止地址传递时,函数修改数据,使用const修饰
    return 0;
}
