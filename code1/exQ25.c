#include <stdio.h>

typedef struct
{
    int id;
    char name[50];
    int qty;
} Product;

int main()
{
    FILE *fp;
    Product p;

    printf("제품번호 입력 : ");
    scanf("%d", &p.id);
    printf("제품명 입력 : ");
    scanf("%s", p.name);
    printf("수량 입력 : ");
    scanf("%d", &p.qty);

    fp = fopen("products.txt", "a+");

    fprintf(fp, "%d,%s,%d", p.id, p.name, p.qty);
    fclose(fp);

    printf("제품 추가 완료.");
    return 0;
}
