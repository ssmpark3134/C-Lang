#include <stdio.h>

int main()
{
    FILE *fp;
    char line[256];

    fp = fopen("products.csv", "r");

    while(fgets(line, sizeof(line), fp) !=NULL){   //fgets 한줄씩 가져오는거
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}