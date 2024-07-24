#include <stdlib.h>
#include <stdio.h>

void swapNum(int * a, int * b)
{
    printf("int func : a=%d,b=%d\n",a,b);
    printf("int func : a=%d,b=%d\n",*a,*b);
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 20;
    printf("a=%d,b=%d\n",a,b);
    printf("a=%d,b=%d\n",&a,&b);
    swapNum(&a,&b);
    printf("a=%d,b=%d\n",a,b);
    system("pause");
    return 0;
}
