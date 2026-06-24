#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));  //NULL -> 0 seed 값

    for(int i=0; i<5; i++){
        printf("%d ", rand()%10+1);
    }
    printf("\n");
   
    return 0;
}