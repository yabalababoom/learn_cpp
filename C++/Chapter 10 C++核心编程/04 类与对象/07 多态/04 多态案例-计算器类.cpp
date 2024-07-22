#include <iostream>
#include <string>
#include <ctime>
using namespace std;


// 多态好处
//1. 组织结构清晰
//2. 可读性强
//3. 前期后期可维护性强



//2. 多态实现计算器
//实现计算器抽象类
class AbstractCalculator
{
public:
    virtual float getResult()
    {
        return 0;
    }
    virtual ~AbstractCalculator(){} //手动添加析构函数,防止warning warning: deleting object of polymorphic class type 'AbstractCalculator' which has non-virtual destructor might cause undefined behavior [-Wdelete-non-virtual-dtor]
    float m_Num1;
    float m_Num2;
};

//加法计算器类
class AddCalculator : public AbstractCalculator
{
public:
    virtual float getResult()
    {
        return m_Num1 + m_Num2;
    }
};

//减法计算器类
class SubCalculator : public AbstractCalculator
{
public:
    virtual float getResult()
    {
        return m_Num1 - m_Num2;
    }
};


//乘法计算器类
class MulCalculator : public AbstractCalculator
{
public:
    virtual float getResult()
    {
        return m_Num1 * m_Num2;
    }
};


//追加除法计算器类
class DivCalculator : public AbstractCalculator
{
public:
    virtual float getResult()
    {
        return m_Num1 / m_Num2;
    }
};


void test01()
{
    DivCalculator abc;
    abc.m_Num1 = 120;
    abc.m_Num2 = 103;
    cout << abc.m_Num1 << "/" << abc.m_Num2 << "=" << abc.getResult() << endl;
}


void test02()
{
    //多态使用条件:父类指针或者引用指向子类对象
    //加法
    AbstractCalculator *abc = new AddCalculator;
    abc->m_Num1 = 120;
    abc->m_Num2 = 103;
    cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult() << endl;
    //用完销毁
    delete abc;

    //减法
    abc = new SubCalculator;
    abc->m_Num1 = 120;
    abc->m_Num2 = 103;
    cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->getResult() << endl;
    //用完销毁
    delete abc;


    //乘法
    abc = new MulCalculator;
    abc->m_Num1 = 120;
    abc->m_Num2 = 103;
    cout << abc->m_Num1 << "*" << abc->m_Num2 << "=" << abc->getResult() << endl;
    //用完销毁
    delete abc;


    //除法
    abc = new DivCalculator;
    abc->m_Num1 = 120;
    abc->m_Num2 = 103;
    cout << abc->m_Num1 << "/" << abc->m_Num2 << "=" << abc->getResult() << endl;
    //用完销毁
    delete abc;
}

int main(int argc, char const *argv[])
{
    // test01();
    test02();
    return 0;
}
