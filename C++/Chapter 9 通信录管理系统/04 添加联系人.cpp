// 功能描述:添加联系人, 上限为1000; 信息包括:姓名,年龄,电话,住址
// 实现步骤:
// 1. 设计联系人结构体
// 2. 设计通讯录结构体
// 3. main函数创建通讯录
// 4. 封装添加联系人函数
// 5. 测试添加联系人功能

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

//1. 设计联系人结构体
struct Person
{
    string m_Name;
    int m_Sex; // 1:man; 2:women
    int m_Age;
    string m_phone;
    string m_Addr;
};

#define MAX 1000 //设定最大存储人数1000
//2. 设计通讯录结构体
struct Addressbooks
{
    struct Person personArray[MAX];
    int m_Size;
};



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

// 1. 添加联系人
void addPerson(Addressbooks * abs)
{
    //首先判断通讯录是否已满
    if (abs->m_Size == MAX) 
    {
        cout << "通讯录已满,无法添加!!" << endl;
    } 
    else
    {
        //添加具体的联系人
        //name
        string name;
        cout << "please input name:" << endl;
        cin >> name;
        abs->personArray[abs->m_Size].m_Name = name;

        //gender
        int gender;
        cout << "please input gender: 1-> man; 2-> women" << endl;
        
        while (true)
        {
            cin >> gender;
            if (gender == 1 || gender == 2) 
            {
                abs->personArray[abs->m_Size].m_Sex = gender;
                break;
            } 
            else
            {
                cout << "please input right gender!!!" << endl;
            }
        }

        // age
        cout << "please input age:" << endl;
        int age = 0;
        while (true)
        {
            cin >> age;
            if (age > 0 || age < 100) 
            {
                abs->personArray[abs->m_Size].m_Age = age;
                break;
            } 
            else
            {
                cout << "please input right age!!!" << endl;
            }
        }
        
        //phone
        string phone;
        cout << "please input phone:" << endl;
        cin >> phone;
        abs->personArray[abs->m_Size].m_phone = phone;

        //address
        string address;
        cout << "please input address:" << endl;
        cin >> address;
        abs->personArray[abs->m_Size].m_Addr = address;

        //update 通讯录当前人数
        abs->m_Size++;

        cout << "添加成功" << endl;
        system("pause");
        system("cls"); //清屏
    }
}



int main(int argc, char const *argv[])
{
    int select = 0; //创建用户选择输入的变量
    // 3. main函数创建通讯录
    Addressbooks abs;
    //初始化通讯录中的当前人员个数
    abs.m_Size = 0;
    
    while (true) 
    {
        //调用菜单
        showMenu();
        cin >> select;
        
        switch (select)
        {
            case 1: // 1. 添加联系人
                addPerson(&abs); // 利用地址传递,更改实参中的数据
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




