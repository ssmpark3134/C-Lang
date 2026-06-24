#include <stdio.h>

typedef struct
{
    int id;
    char name[50];
    int qty;
    int price;
    char lot[30];
} Product;

void create();
void read();

int main()
{
    int menu;
    while(1){
        printf("\n===== 재고 관리 프로그램 =====\n");
        printf("1. 제품 추가\n");
        printf("2. 제품 조회\n");
        printf("0. 종료\n");
        printf("메뉴 선택 : ");
        scanf("%d", &menu);

        switch(menu){
            case 1:
            create();
            break;

            case 2:
            read();
            break;

            case 0:
            printf("종료");
            return 0;

            default:
            printf("잘못된 메뉴입니다.\n");
            break;
        }
    }
    return 0;
}
//추가
void create(){
    FILE *fp;
    Product p;

    printf("제품번호 입력 : ");
    scanf("%d", &p.id);
    printf("제품명 입력 : ");
    scanf("%s", p.name);
    printf("수량 입력 : ");
    scanf("%d", &p.qty);
    printf("가격 입력 : ");
    scanf("%d", &p.price);
    printf("LOT 입력 : ");
    scanf("%s", p.lot);

    fp=fopen("products.txt", "a");
    fprintf(fp, "%d,%s,%d,%d,%s\n", p.id, p.name, p.qty, p.price, p.lot);
    fclose(fp);
    printf("제품 추가 완료.\n");
}

//읽기
void read(){
    FILE *fp;
    Product p;

    fp=fopen("products.txt", "r");
    printf("\n[제품목록]\n");
    printf("번호\t제품명\t수량\t가격\tLOT\n");
    printf("-----------------------------------------\n");
    char header[100];
    fgets(header, sizeof(header), fp);

    while (fscanf(fp,"%d,%49[^,],%d,%d,%49[^,\n]", &p.id,p.name,&p.qty,&p.price,p.lot)==5){
        printf("%d\t%s\t%d\t%d\t%s\n", p.id,p.name,p.qty,p.price,p.lot);
    }
    fclose(fp);  
}