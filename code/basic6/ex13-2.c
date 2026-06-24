#include <stdio.h>

int main()
{
    int a=10, b=20;
    int temp;
    printf("a,b : %d, %d\n", a, b);

    {
        temp=a;
        a=b;
        b=temp;
    }
    printf("temp : %d\n", temp);

    return 0;
}