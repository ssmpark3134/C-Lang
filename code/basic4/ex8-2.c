#include <stdio.h>

int main()
{
    int score[5];
    int total=0;
// 1. 입력
    for(int i=0; i<5; i++){
        scanf("%d",&score[i]);
    }
// 2. 합산
    for(int i=0;i<5;i++){
        total+=score[i];
    }
    printf("total : %d\n",total);
// 3. 배열의 요소출력
    for(int i=0; i<5; i++){
        printf("%d ", score[i]);
    }
    printf("\n");
    double avg=total/5.0;
    printf("평균 : %.1lf", avg);


    return 0;
}