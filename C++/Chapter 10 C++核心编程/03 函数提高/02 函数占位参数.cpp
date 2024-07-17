// C++中函数的形参列表里可以有占位参数,用来做占位,调用函数时必须填补该位置
// 语法:返回值类型 函数 (数据类型) {}
// 在现阶段函数的占位参数存在意义不大,但是后面的课程中会用到该技术


#include <iostream>
#include <string>
#include <ctime>
using namespace std;


//占位参数,可以有默认参数
void func(int a, int = 1000)  //第二个int是占位参数
{
    cout << "this is func " << endl;

}




int main(int argc, char const *argv[])
{
    func(10, 20); // 定义了占位参数且没有默认参数时,必须添加对应个数类型的实参;
    func(10);     // 有默认参数时,也可以不传

    return 0;
}
