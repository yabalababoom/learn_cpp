#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
using namespace std;

/*
5.1.2读文件
    读文件与写文件步骤相似,但是读取方式相对于比较多
读文件步骤如下:
    1.包含头文件
        #include<fstream>
    2. 创建流对象
        ifstream ifs; input_file_stream(ifs)
    3.打开文件并判断文件是否打开成功
        ifs.open("文件路径",打开方式);
    4.读数据
        四种方式读取
    5. 关闭文件
        ifs.close();

*/



//文本文件 读文件
void test02()
{
    // 1.包含头文件
        // #include<fstream>
    // 2. 创建流对象
    ifstream ifs; 
    // 3.打开文件并判断文件是否打开成功
    ifs.open("write_test.txt",ios::in);

    if ( !ifs.is_open()) // ifs.is_open() 打开成功返回1, 否则0
    {
        cout << "failed to open file" << endl;
        return;
    }
    // 4.读数据
    //4.1 第一种
    // char buf[1024] = {0}; // 创建字符数组buf
    // while (ifs >> buf) //ifs全部放入数组buf
    // {
    //     cout << buf << endl;
    // }

    //4.2 第2种
    // char buf[1024] = {0};
    // while (ifs.getline(buf,sizeof(buf)))
    // {
    //     cout << buf << endl;
    // }

    //4.3 第3种(推荐)
    // string buf;
    // while (getline(ifs,buf))
    // {
    //     cout << buf << endl;
    // }

    //4.4 第4种 (不推荐)
    char c;
    while ((c=ifs.get()) != EOF)  //End of file
    {
        cout << c;
    }
    

    // 5. 关闭文件
    ifs.close();
}


int main(int argc, char const *argv[])
{
    test02();
    return 0;
}



