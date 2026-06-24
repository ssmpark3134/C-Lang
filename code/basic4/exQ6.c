/*오뚜기 식품에서 인도카레제품을 만들고 있다.
3번 시도 시 온도를 30~50도 사이로 랜덤하게 제공하라.
------------------------------------------------
1번째 시도 : 35
2번째 시도 : 40
3번째 시도 : 37
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));  //NULL -> 0 seed 값
    for(int i=1;i<=3;i++){
        printf("%d시도 : %d\n",i, rand()%21+30);
    }
    
    return 0;
}