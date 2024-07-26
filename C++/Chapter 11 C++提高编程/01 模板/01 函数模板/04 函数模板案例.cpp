#include <iostream>
#include <string>
#include <ctime>
using namespace std;

/*
1.2.3函数模板案例
案例描述:
    利用函数模板封装一个排序的函数,可以对不同数据类型数组进行排序排序规则从大到小,排序算法为选择排序
    分别利用char数组和int数组进行测试
*/

template<typename T> //声明一个模板,告诉编译器,后面代码出现的T不要报错,T是通用数据类型
void mySwap(T &a,T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

//打印数组模板
template<typename T> 
void printArr(T arr[],int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//排序算法
template<class T>
void mySort(T arr[],int len)
{
    for (int i = 0; i < len; i++)
    {
        int max = i; //认定最大值的下标
        for (int j = i+1; j < len; j++)
        {
            //认定的最大值比遍历出的数值要下,说明j下标的元素才是真正的最大值
            if (arr[max] < arr[j])
            {
                max = j; //更新最大值下标
            }
        }
        if (max != i)
        {
            mySwap(arr[max], arr[i]);//交换max, i下标
        }
    }
}



void test01()
{
    //字符数组
    char charArr[] = "qwertyuiasdfghjkzxcvbnm";
    int len = sizeof(charArr) / sizeof(charArr[0]);
    mySort(charArr, len);
    printArr(charArr, len);
}


void test02()
{
    //字符数组
    int intArr[] = {1, 2, 6, 5 ,3 ,4 ,7 ,8, 6 ,9, 3 ,6, 5,85,966,3652,41,45};
    int len = sizeof(intArr) / sizeof(intArr[0]);
    mySort(intArr, len);
    printArr(intArr, len);
}


int main(int argc, char const *argv[])
{
    test01();
    test02();
    return 0;
}



