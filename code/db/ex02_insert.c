#include <stdio.h>
#include <sqlite3.h>
#include <stdlib.h>
int main()
{
    sqlite3 *db;
    char *errMsg=NULL;

    //파일을 열어야 테이블 선택하게 됩니다.
    if(sqlite3_open("/home/smart/work/dbfiles/person.db", &db) !=SQLITE_OK){
        printf("데이터 열기 실패!!\n");
        exit(1);  //db 파일을 열지 못하고 종료
    }

    const char *sql =
        "INSERT INTO person VALUES"
        "(1,'Hong Gil Dong','010-1234-5678'),"
        "(2,'Lee Sun Shin','010-2345-6789'),"
        "(3,'Kim Yu Shin','010-3456-7890'),"
        "(4,'Park Ji Sung','010-4567-8901'),"
        "(5,'Choi Min Soo','010-5678-9012');";
    
    //쿼리 실행!!
    if(sqlite3_exec(db,sql,NULL,NULL,&errMsg) !=SQLITE_OK){
        printf("데이터 생성 실패");
        exit(1);
    }
    printf("데이터 생성 완료\n");

    sqlite3_close(db);
    return 0;
}
