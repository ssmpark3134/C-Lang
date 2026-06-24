#include <stdio.h>

void rep(int n){
    for(int i=1; i<=n; i++){
        printf("%5d", i);
    }
    printf("\n");
}

int main()
{
    int n;
    printf("입력 : ");
    scanf("%d", &n);
    while(n>100){
        printf("100이하의 수를 입력하세요 : ");
        scanf("%d", &n);
    }
    rep(n);
return 0;
}