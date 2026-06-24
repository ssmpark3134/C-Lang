#include <stdio.h>

int *sum(int a, int b){
    static int res;
    res=a+b;
    return &res;
}

int main()
{
    int *result_pointer;

    result_pointer = sum(10, 20);
    printf("result_pointer : %d\n", *result_pointer);
    return 0;
}