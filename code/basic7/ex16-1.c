#include <stdio.h>
#include <memory.h>
#include <stdlib.h>

int main()
{
    int *pi;   //변수는 pi
    
    pi = (int *)malloc(sizeof(int));  //Heap 메모리에 4byte 정수공간이 만들어짐

    *pi = 10;

    printf("%d\n", *pi);

    free(pi);
    
    return 0;
}