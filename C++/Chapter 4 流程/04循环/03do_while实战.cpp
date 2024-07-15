#include <iostream>
using namespace std;


int main()
{
    // 用do...while 水仙花数
    // int a = 412;
    // int X = (a / 100);
    // int Y = ((a % 100)/10);
    // int Z = (a - X * 100 - Y * 10);
    // cout << "X=" << X << endl;
    // cout << "Y=" << Y << endl;
    // cout << "Z=" << Z << endl;
    int a = 100;
    do {
        int X = (a / 100);
        int Y = ((a / 10) % 10);
        int Z = (a % 10);
        if (X*X*X + Y*Y*Y + Z*Z*Z == a) {
            cout << a << endl;
        }
        a++;
    } while (a < 1000 );
    // system("pause");
    return 0;
}  