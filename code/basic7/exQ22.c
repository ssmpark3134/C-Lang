#include <stdio.h>

int main()
{
    int a, b;
    int gcd;
    int lcm;

    scanf("%d %d", &a,&b);
    for(int i=1; i<=a && i<=b; i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }

    lcm=a*b/gcd;
    printf("최대 공약수 : %d, 최소 공배수 : %d\n", gcd, lcm);

    return 0;
}