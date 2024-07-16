// 功能描述:显示通讯录中已有的联系人

//实现步骤: 
//1.封装显示联系人函数
//2.测试显示联系人功能

#include <iostream>
#include <string>
#include <ctime>
using namespace std;


struct Person
{
    string m_Name;
    int m_Sex; // 1:man; 2:women
    int m_Age;
    string m_phone;
    string m_Addr;
};

#define MAX 1000 //设定最大存储人数1000

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

//2.显示联系人
void showPerson(Addressbooks * abs)
{
    //判断通讯录中的人数是否为0
    if (abs->m_Size == 0) 
    {
        cout << "no person in addressbook" << endl;
    } 
    else
    {
        for (int i = 0; i < abs->m_Size; i++)
        {
            cout << "name :"<<abs->personArray[i].m_Name << "\t"
                 << "age :"<<abs->personArray[i].m_Age << "\t"
                 << "phone :"<<abs->personArray[i].m_phone << "\t"
                 << "gender :"<<(abs->personArray[i].m_Sex == 1 ? "man" : "woman")<< "\t"
                 << "address :"<<abs->personArray[i].m_Addr << endl;
        }
    }
    system("pause");
    system("cls"); //清屏
}




int main(int argc, char const *argv[])
{
    int select = 0; //创建用户选择输入的变量
    //创建通讯录
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
                showPerson(&abs);
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




