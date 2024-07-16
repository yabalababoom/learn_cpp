//功能描述:退出通讯录
//思路: 根据用户不同的选择,进入不同的功能, 可以选择switch结构,首先搭建整体架构
// 当用于选择0的时候,执行退出,选择其他,先不进行操作

//封装显示菜单界面作为函数
#include <iostream>
#include <string>
#include <ctime>
using namespace std;


void showMenu()
{
    cout << "************************* " << endl;
    cout << "***** 1. 添加联系人 ***** " << endl;
    cout << "***** 2. 显示联系人 ***** " << endl;
    cout << "***** 3. 删除联系人 ***** " << endl;
    cout << "***** 4. 查找联系人 ***** " << endl;
    cout << "***** 5. 修改联系人 ***** " << endl;
    cout << "***** 6. 清空联系人 ***** " << endl;
    cout << "***** 0. 退出通讯录 ***** " << endl;
    cout << "************************* " << endl;

}

int main(int argc, char const *argv[])
{
    int select = 0; //创建用户选择输入的变量

    while (true) 
    {
        //调用菜单
        showMenu();

        cin >> select;
        switch (select)
        {
            case 1: // 1. 添加联系人
                /* code */
                break;
            case 2: // 2. 显示联系人
                /* code */
                break;
            case 3: // 3. 删除联系人
                /* code */
                break;
            case 4: // 4. 查找联系人
                /* code */
                break;
            case 5: // 5. 修改联系人
                /* code */
                break;
            case 6: // 6. 清空联系人
                /* code */
                break;
            case 0: // 0. 退出通讯录
                cout << "欢迎下次使用" << endl;
                system("pause");
                return 0;
            default:
                break;
        }
    }
    system("pause");
    return 0;
}




