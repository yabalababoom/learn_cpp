
#include <iostream>
#include <string>
#include <ctime>
using namespace std;
/*
案例描述：学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下:
设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员
学生的成员有姓名、考试分数，创建数组存放3名老师，函数给每个老师及所带的学生赋值
最终打印出老师数据以及老师所带的学生数据。*/

// 先定义学生结构体
struct Student
{
    string sName;
    int score;
};
//再定义老师结构体
struct Teacher
{
    string tName;
    struct Student sArray[5];
};

void allocateSpace(struct Teacher tArray[], int len)
{
    string nameSeed = "ABCDE";
    //给老师赋值
    for (int i = 0; i < len; i++)
    {
        tArray[i].tName = "Teacher_";
        tArray[i].tName += nameSeed[i];

        //通过循环给所带学生赋值
        for (int j = 0; j < 5; j++)
        {
            tArray[i].sArray[j].sName = "Student_";
            tArray[i].sArray[j].sName += nameSeed[j];
            int random = rand() % 61 + 40;//40~100
            tArray[i].sArray[j].score = random;
        }
    }
}


void printInfo(struct Teacher tArray[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "teacher name:" << tArray[i].tName << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "\tstudent.name:" << tArray[i].sArray[j].sName << "\tstudent.score:" << tArray[i].sArray[j].score << endl;
        }
    }
}

int main(int argc, char const *argv[])
{
    //随机数种子
    srand((unsigned int)time(NULL));

    // 1.创建3名老师的数组
    struct Teacher tArray[3];
    int len = sizeof(tArray) / sizeof(tArray[0]);
    

    // 2.通过函数对3名老师赋值,并给对应的学生信息赋值
    allocateSpace(tArray, len);
    // 3.打印老师及学生的所有信息
    printInfo(tArray, len);

    system("pause");
    return 0;
}
