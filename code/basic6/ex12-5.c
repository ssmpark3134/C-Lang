#include <stdio.h>
#include <string.h>

int main()
{
    char str[80];

    fgets(str, sizeof(str), stdin);  //apple jam

    str[strlen(str)-1] = '\0';  // null값 추가  버그 제거

    printf("현재 글자수 : %d\n", strlen(str)); //엔터입력 받아서 \n 포함됨.


    return 0;
}