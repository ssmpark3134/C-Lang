#include <stdio.h>

int main()
{
    FILE *fp;
    char str[80];
    fgets(str, sizeof(str), stdin);

    fp=fopen("c.txt","w");
    int i=0;
    while(str[i] !='\0'){
        fputc(str[i], fp);
        i++;
    }
    fputc('\n', fp);
    fclose(fp);

    return 0;
}