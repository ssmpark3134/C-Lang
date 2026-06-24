#include <stdio.h>

double get_num();  //함수 헤더 선언

int main()
{
    double result = get_num();
    printf("반환값 : %lf\n", result);

    return 0;
}
double get_num(){
    double num;
    printf("실수 입력 : ");
    scanf("%lf",&num);

    return num;
}