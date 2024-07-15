#include <iostream>
using namespace std;


int main()
{
    int arr[10] = {4,2,8,0,5,7,1,3,9,10};
    int len = (int)sizeof(arr) / sizeof(*arr);
    cout << "排序前:";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i]<<" ";
    }
    cout << endl;

    // 升序排列
    // 外层循环轮数:元素个数-1
	for (int i = 0; i < len - 1; i++)
    {
        //内层循环对比次数:元素个数-当前轮数-1
        for (int j = 0; j < len - 1 - i; j++)
        {
            //交换
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j+1] = tmp;
            }
        }			
    }		

    cout << "排序后:";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i]<<" ";
    }
    // system("pause");
    return 0;
}  