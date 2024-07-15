#include <iostream>
using namespace std;


int main()
{
    // 用for 0~100
    for (int i = 1; i <= 100; i++){

        if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7) {
            cout << "nock nock" << endl;
        } else{
            cout << i << endl;
        }

    }
        
        // system("pause");
        return 0;
}  