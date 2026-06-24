#include <stdio.h>

int main()
{
    int i;
    for(i=1; i<=1000; i++){
        if(i%30==0 && i%50==0){
            printf("%d\n", i);
        }
    }
    return 0;
}