#include <stdio.h>

int main()
{
    int i;
    int sum=0;
    for(i=1; i<=1000; i++){
        printf("생산량 입력 : ");
        scanf("%d",&i);

        sum+=i;
        if(sum>=1000) break;
        
        printf("현재 누적 생산량 : %d\n\n", sum);
        
    }
    printf("\n생산 목표 달성!\n");
    printf("최종 생산량 : %d\n", sum);
    return 0;
}