// 示例2:设计一个学生类,属性有姓名和学号,可以给姓名和学号赋值,可以显示学生的姓名和学号

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

/*
类中的属性和行为统称为成员;
属性也叫成员属性,成员变量
行为也叫 成员函数,成员方法
*/

class Student 
{
public:
    //属性 name,id
    string m_Name;
    int m_Id;
    
    //行为 showInfo()
    void showInfo()
    {
        cout << "name is: " << m_Name << endl;
        cout << "id is : " << m_Id << endl;
    }

    //通过函数赋值
    void setName(string name)
    {
        m_Name = name;
    }

    void setID(int id)
    {
        m_Id = id;
    }
};





int main(int argc, char const *argv[])
{
    Student stu1;
    // stu1.m_Id = 2012145;
    stu1.setID(2012145);
    // stu1.name = "jimmy"; //直接赋值
    stu1.setName("bob");  // 通过函数赋值
    stu1.showInfo();
    return 0;
}
