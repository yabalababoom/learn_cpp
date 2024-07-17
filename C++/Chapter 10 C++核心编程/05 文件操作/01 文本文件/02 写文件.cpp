#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
using namespace std;
/*
5.1.1写文件
  写文件步骤如下:
    1.包含头文件
        #include<fstream>
    2. 创建流对象
        fstream ofs;
    3.打开文件
        ofs.open("文件路径",打开方式);
    4. 写数据
        ofs<<"写入的数据";
    5. 关闭文件
        ofs.close();
*/

/*
文件打开方式:
    打开方式            解释
    ios::in          为读文件而打开文件
    ios::out         为写文件而打开文件
    ios::ate         初始位置:文件尾
    jos::app         追加方式写文件
    ios::trunc       如果文件存在先删除,再创建
    ios::binary      二进制方式
*/
// 注意:文件打开方式可以配合使用,利用 | 操作符
// 例如:用二进制方式写文件ios::binary丨ios::out

//文本文件 写文件
void test01()
{
    // 1.包含头文件
    //     #include<fstream>

    // 2. 创建输出流对象 output_file_stream(ofs)
    ofstream ofs;

    // 3.打开文件
    ofs.open("write_test.txt", ios::out);

    // 4. 写数据
    ofs << "jim write start" << endl;
    ofs << "jim write 123456" << endl;
    ofs << "jim write end" << endl;
    // 5. 关闭文件
    ofs.close();


    ;
}


int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
