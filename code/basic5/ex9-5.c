#include <stdio.h>

int main()
{
    char ch;
    double db;
    int in;

    char *pc=&ch;
    double *pd=&db;
    int *pi=&in;

    printf("ch변수 자료형의 크기 : %d\n", sizeof(ch));
    printf("db변수 자료형의 크기 : %d\n\n", sizeof(db));

    printf("ch포인터 자료형의 크기 : %d\n", sizeof(&ch));
    printf("db포인터 자료형의 크기 : %d\n", sizeof(&db));
    printf("int포인터 자료형의 크기 : %d\n", sizeof(&in));

    return 0;
}