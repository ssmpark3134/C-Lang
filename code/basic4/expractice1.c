#include <stdio.h>

// OR 연산자
// int main()
// {
//     for(int i=1;i<=100;i++){
//        if(i % 3==0 || i%7==0){
//         printf("%d\n",i);
//        } 
//     }
//     printf("\n");
//     return 0;
// }

// AND 연산자
int main()
{
    for(int i=1;i<=100;i++){
       if(i % 4==0 && i%5==0){
        printf("%d\n",i);
       } 
    }
    printf("\n");
    return 0;
}