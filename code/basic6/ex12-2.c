#include <stdio.h>

int main()
{
    char *name1 = "chulsu";
    char *name2 = "tomi";

    name1 = "bob";
    printf("%s\n", name1);
    printf("%s\n", name2);
    return 0;
}