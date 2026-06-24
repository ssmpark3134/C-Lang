#include <stdio.h>

int main()
{
    int ary[10]={1,2,3,4,5,6,7,8,9,10};
    //반복문과 if문을 사용해서 배열의 요소중 홀수 값만 출력하라.
    for(int i=0; i<10; i+=2){
        // if (ary[i]%2==0){
        //     printf("%d\n", ary[i]);
        // }
        printf("%d\n",ary[i]);
    }
    return 0;
}