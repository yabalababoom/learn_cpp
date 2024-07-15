//在循环语句中,跳过本次循环,执行下次循环
#include <iostream>
using namespace std;


int main()
{
    // 用for 0~100
    for (int i = 1; i <= 100; i++){

        if (i % 2 == 0) {
            continue; // 遇到偶数就跳过
        } else {
            cout << i << endl;
        }

    }
        
        // system("pause");
        return 0;
}  