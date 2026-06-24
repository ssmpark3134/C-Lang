#include <stdio.h>
#include <string.h>

int main()
{
    char str[80];
    char date[80];
    char Lot[80];

    printf("제품명 : ");
    fgets(str, sizeof(str), stdin);

    printf("생산일 : ");
    fgets(date, sizeof(date), stdin);


    date[strcspn(date, "\n")] = '\0';
    str[strcspn(str, "\n")] = '\_';
    
    
    strcpy(Lot,str);

    strcat(Lot, date);

    printf("%s\n", Lot);

    return 0;
}