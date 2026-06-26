#include <stdio.h>
#include <sqlite3.h>

int main()
{
    printf("SQLite 버전 : %s\n", sqlite3_libversion());
        
    return 0;
}
