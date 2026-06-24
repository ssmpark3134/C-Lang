#include <stdio.h>

int main()
{   
    int i;
    int score[5];
    int count;
    int total=0;
    double avg;

    count = sizeof(score) / sizeof(score[0]);

    printf("sizeof(score) : %d\n", sizeof(score));
    printf("sizeof(score[0]) : %d\n", sizeof(score[0]));
    printf("count : %d\n", count);

    for(i=0; i<count; i++){
        scanf("%d", &score[i]);
    }
    for(i=0; i<count; i++){
        total+=score[i];
    }
    avg=total/(double)count;

    for(i=0; i<count; i++){
        printf("%d ", score[i]);
    }
    printf("\n");

    printf("평균 : %.1lf \n", avg);
    
    return 0;
}