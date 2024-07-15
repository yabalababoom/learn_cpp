//执行多条件分支语句
#include <iostream>
using namespace std;


int main()
{
    //switch语句 ; 给电影打分
    cout << "请给电影打分:" << endl;
    int score = 0;
    cin >> score;
    cout << "score you input is:" << score << endl;
    char type = 'Z';
    if (10 >= score && score  >= 8) {
        type = 'A';
    } else if ( 8 > score && score> 5) 
    {
        type = 'B';
    } else if (score > 10 || score < 0)
    {
        cout << "input wrong score!" << endl;
        return 0;
    }
    else
    {
        type = 'C';
    }
    switch (type)
    {
        case 'A':
            cout << "classical movie!" << endl;
            break;
        case 'B':
            cout << "good movie!" << endl;
            break;
        default:
            cout << "Not good movie!" << endl;
            break;
    }
    // system("pause");
    return 0;
}  