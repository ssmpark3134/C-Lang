#include <stdio.h>
#include <sqlite3.h>
#include <stdlib.h>

void create(sqlite3 *db);
void read(sqlite3 *db);
void update(sqlite3 *db);
void delete(sqlite3 *db);

int pid;
char pname[50];
int qty;
int wid;
char worker[50];


int main()
{
    sqlite3 *db;
    if(sqlite3_open("/home/smart/work/dbfiles/phone.db", &db) !=SQLITE_OK){
        printf("데이터베이스 열기 실패 : \n");
        return 1;
    }

    
    int select;
    while(1){
        printf("\n-------재고 관리 기능 프로그램-------\n");
        printf("1. 제품 등록\n");
        printf("2. 제품 보기\n");
        printf("3. 제품 수정\n");
        printf("4. 제품 삭제\n");
        printf("0. 종료\n");
        printf("선택 : ");
        scanf("%d",&select);

        switch(select){
            case 1:
            create(db);
            break;

            case 2:
            read(db);
            break;

            case 3:
            update(db);
            break;

            case 4:
            delete(db);
            break;

            case 0:
            printf("종료\n");
            sqlite3_close(db);
            return 0;

            default:
            printf("잘못된 선택입니다.");
            break;
        }
    }
    
    
    return 0;
}

void create(sqlite3 *db){
    char *errMsg=NULL;

    // DB가 잠겨 있으면 최대 5초까지 기다림 !!!!
    sqlite3_busy_timeout(db, 5000);

    // 동시 읽기/쓰기 성능 개선용
    sqlite3_exec(db, "PRAGMA journal_mode=WAL;", NULL, NULL, NULL);


    const char *sql = 
        "CREATE TABLE IF NOT EXISTS product ("
        "pid INTEGER PRIMARY KEY, "
        "pname TEXT NOT NULL, " 
        "qty INTEGER NOT NULL,"
        "wid INTEGER NOT NULL, "
        "worker TEXT NOT NULL);";

    if(sqlite3_exec(db, sql, NULL, NULL, &errMsg) !=SQLITE_OK){
        printf("테이블 생성 실패 : %s\n", errMsg);
    } else{
        printf("테이블 생성 성공\n");
    }
    printf("ex)1,'aaa',100,1,'aaa'\n");
    printf("추가할 정보 : ");
    scanf("%d,%[^,],%d,%d,%s", &pid, pname, &qty, &wid, worker);

    char insert_sql[600];

    sprintf(insert_sql,"INSERT INTO product VALUES(%d, '%s', %d, %d, '%s' )",
                        pid, pname, qty, wid, worker);

    if(sqlite3_exec(db,insert_sql,NULL,NULL,&errMsg) !=SQLITE_OK){
        printf("데이터 생성 실패 : %s\n", errMsg);
        exit(1);
    }
    printf("데이터 생성 완료\n");

}
void read(sqlite3 *db){
    sqlite3_stmt *stmt;

    if (sqlite3_open("/home/smart/work/dbfiles/phone.db", &db) != SQLITE_OK)
    {
        printf("데이터베이스 열기 실패\n");
        return 1;
    }

    const char *sql = "SELECT * FROM product;";

    // SQL 준비
    if (sqlite3_prepare_v2(db, sql, -1, &stmt, NULL) != SQLITE_OK)
    {
        printf("조회 준비 실패\n");
        sqlite3_close(db);
        return 1;
    }

    printf("PID\tPNAME\tPQTY\twid\tworker\n");
    printf("-------------------------------------------\n");

    // 한 행씩 조회
    while (sqlite3_step(stmt) == SQLITE_ROW)
    {
        int id = sqlite3_column_int(stmt, 0);
        const unsigned char *pname = sqlite3_column_text(stmt, 1);
        int pqty = sqlite3_column_int(stmt, 2);
        int wid = sqlite3_column_int(stmt, 3);
        const unsigned char *worker = sqlite3_column_text(stmt, 4);

        printf("%d\t%s\t%d\t%d\t%s\n", pid, pname, qty, wid, worker);
    }

    // 마무리
    sqlite3_finalize(stmt);

    return 0;
}

void update(sqlite3 *db){
    char *errMsg = NULL;

    int scan_pid;

    printf("수정할 제품의 번호(PID) 입력: ");
    scanf("%d", &scan_pid);
    getchar(); 

    printf("새 제품명 입력: ");
    scanf("%[^\n]", pname); 
    getchar();

    printf("새 수량 입력: ");
    scanf("%d", &qty);

    printf("새 작업자번호 입력: ");
    scanf("%d", &wid);
    getchar();

    printf("새 작업자명 입력: ");
    scanf("%s", worker);
    getchar();

    char update_sql[600];
    sprintf(update_sql, 
        "UPDATE product SET pname='%s', qty=%d, wid=%d, worker='%s' WHERE pid=%d",
        pname, qty, wid, worker, scan_pid);

        if(sqlite3_exec(db, update_sql, NULL, NULL, &errMsg)!= SQLITE_OK){
        printf("데이터 수정 실패 : %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
            printf("데이터 수정 완료\n");
    }
}

