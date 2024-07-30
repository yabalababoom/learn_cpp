//自己的通用数组类

#pragma once
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

template<class T> 
class MyArray
{
private:
    T *pAddress; //指针指向堆区开辟的真实数组
    int m_Capacity; //数组容量
    int m_Size;  //数组大小

public:
    //有参构造 参数:容量
    MyArray(int capacity)
    {
        // cout << "MyArray 的有参构造调用" << endl;
        this->m_Capacity = capacity;
        this->m_Size = 0;
        this->pAddress = new T[this->m_Capacity]; //在堆区创建通用类型T的数组, 容量为传入的参数capacity
    }

    //拷贝构造  (为了防止浅拷贝的问题)
    MyArray(const MyArray& arr)
    {
        // cout << "MyArray 的拷贝构造调用" << endl;
        this->m_Capacity = arr.m_Capacity;
        this->m_Size = arr.m_Size;
        //this->pAddress = arr.pAddress; //这是浅拷贝

        //深拷贝
        this->pAddress = new T[arr.m_Capacity];
        
        //将arr中的数据拷贝过来
        for (int i = 0; i < this->m_Size; i++)
        {
            this->pAddress[i] = arr.pAddress[i];
        }
        
    }

 
    //重载operator= 防止浅拷贝问题  =(等号) 要返回自身的引用,实现连等的操作
    MyArray& operator=(const MyArray& arr)
    {
        // cout << "MyArray 的重载operator=调用" << endl;
        //先判断原来的堆区是否有数据,如果有,要先释放
        if (this->pAddress != NULL)
        {
            delete[] this->pAddress;
            this->pAddress = NULL;
            this->m_Capacity = 0;
            this->m_Size = 0;
        }
        //深拷贝
        this->m_Capacity = arr.m_Capacity;
        this->m_Size = arr.m_Size;
        this->pAddress = new T[arr.m_Capacity];
        for (int i = 0; i < this->m_Size; i++)
        {
            this->pAddress[i] = arr.pAddress[i];
        }
        return *this;
    }

    //尾插法
    void Push_Back(const T & val) //引用的方式传入
    {
        //判断capacity是否等于size
        if (this->m_Capacity == this->m_Size)
        {
            return;
        }
        this->pAddress[this->m_Size] = val; //在数组末尾插入指定的数据
        this->m_Size++; // 数组大小要更新
    }

    //尾删法
    void Pop_Back()
    {
        //让用户访问不到最后一个元素,即为尾删, 逻辑上删除
        if (this->m_Size == 0)
        {
            return;
        }
        this->m_Size--;
    }

    // 通过下标访问数组中的元素;  arr[0] = 100 要想实现左值调用,需要返回T的引用
    T& operator[](int index)
    {
        return this->pAddress[index];
    }

    //返回数组容量
    int getCapacity()
    {
        return this->m_Capacity;
    }
    //返回数组大小
    int getSize()
    {
        return this->m_Size;
    }


    //析构函数 (手动开辟了堆区内存,需要析构函数手动释放)
    ~MyArray()
    {
        // cout << "MyArray 的析构构造调用" << endl;
        if (this->pAddress != NULL)
        {
            delete[] this->pAddress; //因为是数组 要加[]
            this->pAddress = NULL;
        }
    }
};

