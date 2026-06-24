#include <stdio.h>

int get_width();
int get_height();
int get_area(int width, int height);

int main()
{
    int width, height;
    int area;

    width = get_width();
    height = get_height();

    area = get_area(width, height);
    printf("넓이는 : %d\n", area);
    return 0;
}
int get_width(){
    int width;
    scanf("%d", &width);
    return width;
}
int get_height(){
    int height;
    scanf("%d", &height);
    return height;
}
int get_area(int width, int height){
    int area;
    area=width * height;
    return area;
}