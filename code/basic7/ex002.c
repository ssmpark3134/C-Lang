#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char temp[100];
    fgets(temp, sizeof(temp), stdin);
    temp[strcspn(temp, "\n")] = '\0';

    //동적 할당
    char *product = 
    (char *)malloc(strlen(temp)+1);  //배열 공간 만들기 char temp[100]; 과 같음
    
    strcpy(product, temp);
    printf("제품명 : %s\n", product);
    free(product);
    
    return 0;
}