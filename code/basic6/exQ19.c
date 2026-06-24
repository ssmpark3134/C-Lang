#include <stdio.h>

int main()
{
    int i;
    int a;
    int sum;

    printf("입력 : ");
    scanf("%d", &i);

    for(a=1; a<i; a++){
        if(i%a==0){
            sum+=a;
        }
    }
    if(sum==i){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}