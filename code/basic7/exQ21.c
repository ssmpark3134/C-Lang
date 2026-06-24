#include <stdio.h>

int main()
{
    for (int i='A'; i<='Z'; i++){
        for(int j='A'; j<='Z'; j++){
            for(int k='A'; k<='Z'; k++){
                printf("%c%c%c ", i,j,k);
            }
        }
    }
    return 0;
}