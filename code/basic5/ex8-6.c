#include <stdio.h>

int main()
{
    char str[80];

    //gets(str); 보안 문제로 제거됨
    fgets(str, sizeof(str), stdin);  //scanf

    puts(str); //printf

    return 0;
}