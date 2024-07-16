/*
案例描述：设计一个英雄的结构体，包括成员姓名，年龄,性别；
创建结构体数组，数组中存放5名英雌。通过冒泡排序的算法，将数组中的英按照年龄进行升序排序，最终打印排序后的结果
*/
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

//1. 设计hero结构体
//2. 创建5名英雄的数组
//3. 对数组按照年龄进行排序
//4. 输出排序后的结果

//1. 设计hero结构体
struct Hero
{
    string name;
    int age;
    string gender;
};


//冒泡排序,按照年龄升序
void bubbleSort(struct Hero heroArray[], int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len -i -1; j++)
        {
            if (heroArray[j].age > heroArray[j+1].age)
            {
                struct Hero temp = heroArray[j];
                heroArray[j] = heroArray[j + 1];
                heroArray[j + 1] = temp;
            }            
        }       
    }  
}

//打印输出
void printInfo(struct Hero heroArray[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << heroArray[i].name <<" "<< heroArray[i].age << " "<< heroArray[i].gender  << endl;
    }
}

int main(int argc, char const *argv[])
{
    //2. 创建5名英雄的数组
    struct Hero heroArray[5] =
    {
        {"刘备",23,"男"},
        {"关羽",22,"男"},
        {"张飞",20,"男"},
        {"赵云",21,"男"},
        {"貂蝉",19,"女"},
    };
    int len = sizeof(heroArray) / sizeof(heroArray[0]);
    cout << "排序前 " << endl;
    printInfo(heroArray, len);
    // for (int i = 0; i < len; i++)
    // {
    //     cout << heroArray[i].name << heroArray[i].age << heroArray[i].gender  << endl;
    // }
    
    //3. 对数组按照年龄进行排序
    cout << "排序后 " << endl;
    bubbleSort(heroArray, len);
    printInfo(heroArray, len);
    //4. 输出排序后的结果
    

    return 0;
}
