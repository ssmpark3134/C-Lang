#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char line[256];

    fp = fopen("products.csv", "r");

    if (fp == NULL)
    {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    // 헤더 건너뛰기
    fgets(line, sizeof(line), fp);

    printf("ID\t이름\t수량\t단가\n");

    while (fgets(line, sizeof(line), fp) != NULL)
    {
        char *id;
        char *name;
        char *qty;
        char *price;

        id = strtok(line, ",");
        name = strtok(NULL, ",");
        qty = strtok(NULL, ",");
        price = strtok(NULL, ",");

        printf("%s\t%s\t%s\t%s",
               id, name, qty, price);
    }

    fclose(fp);

    return 0;
}