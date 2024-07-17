#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
using namespace std;


/*
5.2 二进制文件
    以二进制的方式对文件进行读写操作
    打开方式要指定为 ios::binary 
5.2.1 二进制写文件
    二进制方式写文件主要利用流对象调用成员函数write
    函数原型: ostream& write(const char * buffer, int len);
    参数解释:字符指针buffer指向内存中一段存储空间. len是读写的字节数
*/


class Person
{
private:
    /* data */
public:
    char m_Name[64]; 
    int m_Age;
};

void test01()
{
    // 1.包含头文件
    //     #include<fstream>

    // 2. 创建流对象 , 二进制写
    ofstream ofs("person.txt",ios::out | ios::binary);

    // 3.打开文件
    // ofs.open("person.txt",ios::out | ios::binary);

    // 4. 写数据
    Person p = {"jim", 19};
    ofs.write( (const char *)&p, sizeof(Person));
    // 5. 关闭文件
    ofs.close();
}

int main(int argc, char const *argv[])
{

    test01();
    return 0;
}
