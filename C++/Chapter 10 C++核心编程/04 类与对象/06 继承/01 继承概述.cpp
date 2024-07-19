#include <iostream>
#include <string>
#include <ctime>
using namespace std;



/*
定义类时,下级别的成员除了拥有上一级的共性,还有自己的特性.
这个时候我们就可以考虑利用继承的技术,减少重复代码
*/




//普通实现页面
// class Java
// {
// public:
//     void header()
//     {
//         cout << "首页, 公开课, 登录,注册......(公共头部信息)" << endl;
//     }
//     void footer()
//     {
//         cout << "帮助中心,交流合作,站内地图,......(公共底部信息))" << endl;
//     }
//     void left()
//     {
//         cout << "Java,Python,C++......(公共分类列表)" << endl;
//     }
//     void center()
//     {
//         cout << "Java学科视频" << endl;
//     }
// };

// class Python
// {
// public:
//     void header()
//     {
//         cout << "首页, 公开课, 登录,注册......(公共头部信息)" << endl;
//     }
//     void footer()
//     {
//         cout << "帮助中心,交流合作,站内地图,......(公共底部信息))" << endl;
//     }
//     void left()
//     {
//         cout << "Java,Python,C++......(公共分类列表)" << endl;
//     }
//     void center()
//     {
//         cout << "Python 学科视频" << endl;
//     }
// };

// class CPP
// {
// public:
//     void header()
//     {
//         cout << "首页, 公开课, 登录,注册......(公共头部信息)" << endl;
//     }
//     void footer()
//     {
//         cout << "帮助中心,交流合作,站内地图,......(公共底部信息))" << endl;
//     }
//     void left()
//     {
//         cout << "Java,Python,C++......(公共分类列表)" << endl;
//     }
//     void center()
//     {
//         cout << "C++ 学科视频" << endl;
//     }
// };




//继承实现页面
class BasePage //创建父类
{
public:
    void header()
    {
        cout << "首页, 公开课, 登录,注册......(公共头部信息)" << endl;
    }
    void footer()
    {
        cout << "帮助中心,交流合作,站内地图,......(公共底部信息))" << endl;
    }
    void left()
    {
        cout << "Java,Python,C++......(公共分类列表)" << endl;
    }
};

//JAVA 子类
class Java:public BasePage
{
public:
    void center()
    {
        cout << "Java学科视频" << endl;
    }
};

//Python 子类 
class Python:public BasePage
{
public:
    void center()
    {
        cout << "Python 学科视频" << endl;
    }
};

//CPP 子类
class CPP:public BasePage
{
public:
    void center()
    {
        cout << "C++ 学科视频" << endl;
    }
};



void test01()
{
    Java ja;
    ja.header();
    ja.footer();
    ja.left();
    ja.center();
    cout << "------------------------" << endl;
    Python py;
    py.header();
    py.footer();
    py.left();
    py.center();
    cout << "------------------------" << endl;
    CPP cpp;
    cpp.header();
    cpp.footer();
    cpp.left();
    cpp.center();
    cout << "------------------------" << endl;

}




int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
