#include <stdio.h>  /*Perimter and area*/
#include<conio.h>

float l, b, area, peri;

int main(){
    printf("Enter the length of square :  ");
    scanf("%f", &l);
    printf("Enter the bredth of square :  ");
    scanf("%f", &b);
    peri=2*(length+breadth);  //Formula of Perimeter
    area=l*b;
    printf("%f is the perimeter and %f is the area of the rectanlge with %f length and %f breadth",peri,area,l, b);
    getch();
}
