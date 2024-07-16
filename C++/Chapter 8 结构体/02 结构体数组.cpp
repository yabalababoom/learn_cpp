// 作用: 将自定义的结构体放入数组中,方便维护
// 语法: struct 结构体名 数组名[元素个数] = {{}, {}, {}.... }

#include <iostream>
#include <string>
using namespace std;

int main()
{
// 2. 创建结构体数组
// 3. 给结构体数组中的元素赋值
    struct Student stuArray[3] = 
    {
        {"张三",18,85},
        {"李四",19,95},
        {"王五",18,94}
    };
// 3. 给结构体数组中的元素赋值
    stuArray[2].name = "赵六";
    stuArray[2].age = 85;
    stuArray[2].score = 80;
    // 3. 结构体数组遍历
    for (int i = 0; i < 3; i++)
    {
        cout << stuArray[i].name << " ";
        cout << stuArray[i].age << " ";
        cout << stuArray[i].score << endl;
    }
    

    return 0;
}
