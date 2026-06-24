#include <stdio.h>

int plus(int x, int y);
int minus(int x, int y);
int mul(int x, int y);
double sub(int x, int y);

int main()
{
    int a=200, b=150;
    printf("plus : %d\n", plus(a, b));
    printf("minus : %d\n", minus(a, b));
    printf("mul : %d\n", mul(a, b));
    printf("sub : %.2lf\n", sub(a, b));
    return 0;
}
int plus(int x, int y){
    return x+y;
}
int minus(int x, int y){
    return x-y;
}
int mul(int x, int y){
    return x*y;
}
double sub(int x, int y){
    return (double)x/y;
}