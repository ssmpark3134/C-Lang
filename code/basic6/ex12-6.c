#include <stdio.h>
#include <string.h>

int main()
{
    int age;
    char name[20];

    printf("나이 입력 : ");
    scanf("%d", &age);


    printf("이름 입력 : ");
    // fgets(name, sizeof(name), stdin);
    scanf(" %s", name);

    printf("나이 : %d, 이름 : %s\n", age, name);

    return 0;
}