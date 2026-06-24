#include <stdio.h>

int main()
{
    FILE *fp;
    char str[] = "banana";

    fp = fopen("b.txt", "w");

    int i = 0;
    while(str[i] != '\0'){
        fputc(str[i], fp);    //파일에 찍기
        printf("%c", str[i]); //출력
        i++;
    }
    fputc('\n',fp);
    printf("\n");
    fclose(fp);
    return 0;
}