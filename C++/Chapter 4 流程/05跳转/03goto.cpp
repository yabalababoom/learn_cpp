// 无条件跳转语句  不推荐使用
#include <iostream>
using namespace std;


int main()
{
    //goto
    cout << "1. XXX" << endl;
    cout << "2. XXX" << endl;
    goto FLAG;
    cout << "3. XXX" << endl;
    cout << "4. XXX" << endl;
    FLAG :
    cout << "5. XXX" << endl;
    // system("pause");
    return 0;
}  