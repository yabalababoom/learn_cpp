
/*
2.5 容器算法初识
STL中最常用的容器是vector,可以理解为数组. 下面学习如何向容器中插入数据,并遍历这个容器

容器: vector
算法: for_each
迭代器: vector<int>::iterator

*/

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>


void myPrint(int val) 
{
    cout << val << endl;
}



//vertor容器存放内置数据类型
void test01()
{
    //创建了一个vector容器,数组
    vector<int> v;

    //向容器中插入数据
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    //通过迭代器访问(遍历)容器中的数据
    



    //第一种遍历方式 while
    //声明两个迭代器                                   //vector<int>::iterator 拿到vector<int> 这种容器的迭代器类型
    // vector<int>::iterator itBegin = v.begin(); //起始迭代器 v.begin(), 指向容器中第一个元素
    // vector<int>::iterator itEnd = v.end();     //结束迭代器 v.end()   ,指向容器中最后一个元素的下一个位置
    // while (itBegin != itEnd)
    // {
    //     cout << *itBegin << endl;
    //     itBegin++;
    // }
    
    //第二种遍历方式 for
    // for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *it << endl;
    // }
    

    //第三种遍历方式 利用STL中的遍历算法 foreach; 加入 algorithm 头文件
    for_each(v.begin(), v.end(), myPrint);
}


int main(int argc, char const *argv[])
{

    test01();
    // test02();
    // test03();
    return 0;
}
