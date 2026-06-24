#include <stdio.h>
#include <string.h>
int main()
{
    char *dessert="apple";

    printf("%s\n", dessert);


    //일반적인 방식
    char fruit[100];
    strcpy(fruit, "apple");
    printf("%s\n", fruit);
    return 0;
}