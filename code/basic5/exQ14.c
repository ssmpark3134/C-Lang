#include <stdio.h>

int main()
{
    int i=0;
    char lot[80];
    scanf("%s", lot);

    while(lot[i]!= '\0'){
        if(lot[i]>='A' && lot[i]<= 'Z'){
            printf("%c\n", lot[i]);
        }
        i++;
    }
    printf("%d\n", i);
    return 0;
}