
#include <iostream>
using namespace std;


int main()
{
    int arr[5] = {1,2,3,4,5};
    int start = 0;
    int end = sizeof(arr) / sizeof(arr[0]) - 1;

    while (start < end)
    {
        int tmp = arr[start];
        arr[start] = arr[end];
        arr[end] = tmp;

        start++;
        end--;
    }
    for (int i = 0; i <= sizeof(arr) / sizeof(arr[0]) - 1; i++)
    {
        cout << arr[i] << endl;
    }
    
    

    // system("pause");
    return 0;
}  