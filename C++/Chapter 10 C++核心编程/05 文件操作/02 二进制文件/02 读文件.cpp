#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
using namespace std;

/*
5.2.2 读文件,
    二进制方式读文件主要利用流对象调用成员函数read
    函数原型:istream& read(char *buffer,int len);
    参数解释:字符指针buffer指向内存中一段存储空间.len是读写的字节数
*/

class Person
{
private:
    /* data */
public:
    char m_Name[64]; 
    int m_Age;
};


void test02()
{
    // 1.包含头文件
    //     #include<fstream>

    // 2. 创建流对象 , 二进制读
    ifstream ifs;

    // 3.打开文件 并判断文件是否打开成功
    ifs.open("person.txt",ios::in | ios::binary);
    if ( !ifs.is_open())
    {
        cout << "failed to open file" << endl;
        return;
    }

    // 4. 读数据
    Person p;
    ifs.read( (char *)&p, sizeof(Person)); //取地址,转为char类型, 指定内存空间大小

    cout << "name: " << p.m_Name << endl;
    cout << "age: " << p.m_Age << endl;
    // 5. 关闭文件
    ifs.close();
}

int main(int argc, char const *argv[])
{
    test02();
    return 0;
}
