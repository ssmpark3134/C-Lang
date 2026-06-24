#include <stdio.h>

int main()
{   
    int num[5][5];
    int cnt=25;

    for(int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            num[i][j]=cnt--;
            printf("%5d", num[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}