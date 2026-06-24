#include <stdio.h>
//1에서 100사이 값 중 5의 배수만 출력하라. 단, while문 사용.
int main()
{
    int i=1;

    while(i<=100){
        if(i%5==0){
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}