#include<stdio.h> /*Net Sales*/
#include<conio.h>

float net,gross,dis;

int main(){ clrscr();
    printf("Enter gross sales -  ");
    scanf("%f",&gross);
    printf("discount on percentage of gross sales -  ");
    scanf("%f",&dis);
    dis = gross*(dis/100); /*Formula of discount*/
    printf("The net salary is %f", gross-dis);
    getch();
}
