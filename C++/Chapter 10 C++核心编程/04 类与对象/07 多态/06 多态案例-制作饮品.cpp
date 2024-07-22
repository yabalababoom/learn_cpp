
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// 制作饮品的大致流程为:煮水·冲泡·倒入杯中-加入辅料
// 利用多态技术实现本案例,提供抽象制作饮品基类,提供子类制作加啡和茶叶


class AbstractDrinking
{
private:
    /* data */
public:
    //煮水
    virtual void Boil() = 0;
    //冲泡
    virtual void Brew() = 0;
    //倒入杯中
    virtual void PourInCup() = 0;
    //加入辅料
    virtual void PutSomeThing() = 0;

    void makeDrink()
    {
        Boil();
        Brew();
        PourInCup();
        PutSomeThing();
    }
    virtual ~AbstractDrinking() {}
};

//制作咖啡
class Coffee : public AbstractDrinking
{
public:
//子类必须重写抽象类中的纯虚函数
    //煮水
    virtual void Boil()
    {
        cout << "煮矿泉水" << endl;
    }
    //冲泡
    virtual void Brew() 
    {
        cout << "冲咖啡" << endl;
    }
    //倒入杯中
    virtual void PourInCup()
    {
        cout << "把咖啡倒入杯中" << endl;
    }
    //加入辅料
    virtual void PutSomeThing()
    {
        cout << "加入牛奶,可可脂等佐料" << endl;
    }
};

//制作茶叶
class Tea : public AbstractDrinking
{
public:
//子类必须重写抽象类中的纯虚函数
    //煮水
    virtual void Boil()
    {
        cout << "煮山泉水" << endl;
    }
    //冲泡
    virtual void Brew() 
    {
        cout << "冲茶叶" << endl;
    }
    //倒入杯中
    virtual void PourInCup()
    {
        cout << "把茶水倒入杯中" << endl;
    }
    //加入辅料
    virtual void PutSomeThing()
    {
        cout << "加入糖" << endl;
    }
};

void doWork(AbstractDrinking * abs)
{
    abs->makeDrink();
    delete abs; //手动释放堆区数据
}



void test01()
{
    //制作咖啡
    doWork(new Coffee);
    cout<< "------------" << endl;
    //制作茶水
    doWork(new Tea);
}

int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
