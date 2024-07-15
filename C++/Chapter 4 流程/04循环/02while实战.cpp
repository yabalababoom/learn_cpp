#include <iostream>
using namespace std;
#include <ctime>


int main()
{
    srand((unsigned int)time(NULL));
    int num = rand() % 100 + 1;
    int guess = 0;
    int count = 0;
    while (count <= 50) {
        cout << "please guess a number:" << endl;
        cin >> guess;
        cout << "you guess number is :" << guess << endl;
        if (guess > num) {
            cout << "bigger than num" << endl;
        } else if (guess < num) {
            cout << "smaller than num" << endl;
        }else {
            cout << "congratulation!! guess right!!!" << endl;
            break;
        }
        count++;
    }
    
    // system("pause");
    return 0;
}  