#include <stdio.h>
void print_big();
void print_small();
void print_number();

int main()
{
    print_big();
    print_small();
    print_number();
    
    return 0;
}

void print_big(){
    char ch = 'A';   //65
    for(int i=0; i<26; i++){
        printf("%3c", ch);
        ch++;
    }
    printf("\n");
}

void print_small(){
    char sch = 'a';
    for(int i=0; i<26; i++){
        printf("%3c", sch);
        sch++;
    }
    printf("\n");
}

void print_number(){
    char nb = '0';
    for (int i = 0; i<10; i++){
        printf("%3c", nb++);
    }
    printf("\n");
}