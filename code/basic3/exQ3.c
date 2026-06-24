#include <stdio.h>
int main(){
    int cen;
    double far;

    printf("1~100사이의 자연수를 입력하시오 : ");
    scanf("%d", &cen);

    far = (double)9/5 * cen + 32;

    printf("섭씨온도 : %d\n", cen);
    printf("화씨온도 : %.1lf\n", far);

    return 0;
}