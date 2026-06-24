#include <stdio.h>

int main()
{
    FILE *fp;
    int ary[10]={13,10,13,13,10,26,13,10,13,10};
    int res;

    fp=fopen("a.txt", "wb");
    for(int i=0; i<10; i++){
        fputc(ary[i], fp);
    }
    fclose(fp);
    //읽기 모드
    fp=fopen("a.txt", "rt");
    while (1)
    {
        res=fgetc(fp);
        if(res == EOF) break;
        printf("%4d",res);
        /* code */
    }
    printf("\n");


    return 0;
}