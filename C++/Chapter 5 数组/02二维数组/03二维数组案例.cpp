//定义方式
#include <iostream>
using namespace std;


int main()
{
    //统计每个人的成绩和
    int score[3][3] = {{100, 100, 100}, {90, 50, 100}, {60, 70, 80}};
    string name[3] = {"zs", "ls", "ww"};
    for (int i = 0; i < 3; i++)
    {
        int sum;
        for (int j = 0; j < 3; j++)
        {
            sum += score[i][j];
        }
        cout << "sum of " << name[i] << " is: " << sum << endl;
        sum = 0;
    }
    

    // system("pause");
    return 0;
}