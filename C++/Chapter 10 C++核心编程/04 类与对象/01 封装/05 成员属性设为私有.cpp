#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// 优点1:将所有成员属性设置为私有,可以自己控制读写权限
// 优点2:对于写权限,我们可以检测数据的有效性

class Person
{
//提供共有方法,对私有属性进行控制
public:
    void setName(string name)
    {
        m_Name = name;
    }
    string getName()
    {
        return m_Name;
    }

    void setAge(int age)
    {
        if (age < 0 || age >= 150)
        {
            cout << "set wrong age" << endl;
            return;
        }
        m_Age = age;
    }
    int getAge()
    {
        return m_Age;
    }

    void setIdol(string idol)
    {
        m_Idol = idol;
    }


private:
    string m_Name; //可读可写
    int m_Age = 10;     //只读 可写(年龄在0~150)
    string m_Idol; //只写
};




int main(int argc, char const *argv[])
{
    Person p1;
    p1.setName("jim") ;
    cout << "name: " << p1.getName() << endl;

    p1.setAge(150) ; //赋值不符合要求,返回初始化的值
    cout << "Age: " << p1.getAge() << endl;

    p1.setIdol("taylor"); //只能写入,无法访问

    return 0;
}






