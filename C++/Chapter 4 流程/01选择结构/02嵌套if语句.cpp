#include <iostream>
using namespace std;


int main()
{
    int score = 0;
    cout << "please input your score:" << endl;
    cin >> score;



    if (score >= 750 || score < 0 )
    {
        cout << "Score you input is: " << score << " ; please input right score" << endl;
    }
    else if (score >= 600)
    {
        if (score >= 700)
        {
            cout << "Score you input is: " << score << " ; tsinghua" << endl;
        }
        else if (score >= 650)
        {
            cout << "Score you input is: " << score << " ; pskinbg" << endl;
        }
        else
        {
            cout << "Score you input is: " << score << " ; refmin" << endl;
        }
        
        cout << "congradulation!" << endl;
    }
    else
    {
        cout << "Score you input is: " << score << endl;
        cout << "i'am sorry to hear that!" << endl;
    }
    


    
    // system("pause");
    return 0;
}  