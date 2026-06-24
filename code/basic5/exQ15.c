#include <stdio.h>
void str_cpy(char ch[100], char str[100]);

int main()
{
    char ori[100];
    char copy[100];
    fgets(ori, sizeof(ori), stdin);
    str_cpy(copy, ori);
    printf("문자열 입력 : %s\n", ori);
    printf("배열 복사 : %s\n", copy);
    return 0;
}
void str_cpy(char ch[100], char str[100]){
    int i=0;

    while(str[i] != '\0'){
        ch[i]=str[i];
        i++;
    }
    ch[i]='\0';
}