/*
1. 无参无返
2. 有参无返
3. 无参有返
4. 有参有返
*/
#include <iostream>
using namespace std;

// 1. 无参无返
void test01()
{
    cout << "this is test 01" << endl;
    
}
// 2. 有参无返
void test02(int a)
{
    cout << "this is test 02" << endl;
    cout << "you input :" << a << endl;
}


// 3. 无参有返
int test03()
{
    cout << "this is test 03" << endl;
    return 1000;
}

// 4. 有参有返
int test04(int a)
{
    cout << "this is test 04" << endl;
    cout << "you input :" << a << endl;
    return 1000 + a;
}

int main()
{
    //1 无参无返
    test01();

    //2 有参无返
    test02(120);

    //3 无参有返
    int a = test03();
    cout << "a=" << a << endl;

    //4 有参有返
    int res = test04(500);
    cout << "res=" << res << endl;

    // system("pause");
    return 0;
}  
