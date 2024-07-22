#include <iostream>
#include <string>
#include <ctime>
using namespace std;

/*
电脑主要组成部件为CPU(用于计算),显卡(用于显示),内存条(用于存储)
将每个零件封装出抽象基类,并且提供不同的厂商生产不同的零件,例如Intel/厂商和Lenovo,厂商
创建电脑类提供让电脑工作的函数,并且调用每个零件工作的接口
测试时组装三台不同的电脑进行工作
*/

//抽象不同零件类
//抽象CPU类
class CPU
{
public:
    //抽象计算函数
    virtual void calculate() = 0;
    virtual ~CPU(){}
};

//抽象显卡类
class VideoCard
{
public:
    //抽象显示函数
    virtual void display() = 0;
    virtual ~VideoCard(){}
};
//抽象内存类
class Memory
{
public:
    //抽象计算函数
    virtual void storage() = 0;
    virtual ~Memory(){}
};

//电脑类
class Computer
{
private:
    CPU * m_cpu; //cpu 的零件指针
    VideoCard * m_vc;
    Memory * m_mem;

public:
    Computer(CPU * cpu, VideoCard * vc, Memory * mem) //有参构造
    {
        m_cpu = cpu;
        m_mem = mem;
        m_vc = vc;
    }
    //工作函数
    void work()
    {
        //零件工作
        m_cpu->calculate();
        m_vc->display();
        m_mem->storage();
    }
    virtual ~Computer()
    {
        if (m_cpu != NULL)
        {
            delete m_cpu;
            m_cpu = NULL;
        }
        if (m_vc != NULL)
        {
            delete m_vc;
            m_vc = NULL;
        }
        if (m_mem != NULL)
        {
            delete m_mem;
            m_mem = NULL;
        }
        
    }
};


//具体厂商 intel
class IntelCPU:public CPU
{

public:
    virtual void calculate()
    {
        cout << "Intel CPU working, start calculate..." << endl;
    }
};
class IntelVideoCard:public VideoCard
{

public:
    virtual void display()
    {
        cout << "Intel CPU VideoCard, start display..." << endl;
    }
};
class IntelMemory:public Memory
{

public:
    virtual void storage()
    {
        cout << "Intel Memory working, start storage..." << endl;
    }
};

//具体厂商 lenovo
class LenovoCPU:public CPU
{

public:
    virtual void calculate()
    {
        cout << "Lenovo CPU working, start calculate..." << endl;
    }
};
class LenovoVideoCard:public VideoCard
{

public:
    virtual void display()
    {
        cout << "Lenovo CPU VideoCard, start display..." << endl;
    }
};
class LenovoMemory:public Memory
{

public:
    virtual void storage()
    {
        cout << "Lenovo Memory working, start storage..." << endl;
    }
};


void test01()
{
    //第一台电脑零件
    CPU * intelCPU =  new IntelCPU;
    VideoCard * intelVideoCard =  new IntelVideoCard;
    Memory *intelMem = new IntelMemory;

    //创建第一台电脑
    Computer * computer = new Computer(intelCPU,intelVideoCard,intelMem);
    computer->work();
    delete computer;

    cout << "------------" << endl;

    //第二台电脑
    Computer * computer2 = new Computer(new LenovoCPU,new LenovoVideoCard,new LenovoMemory);
    computer2->work();
    delete computer2;

    cout << "------------" << endl;
    //第三台电脑
    Computer * computer3 = new Computer(new LenovoCPU,new IntelVideoCard,new LenovoMemory);
    computer3->work();
    delete computer3;
}


int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
