#include <stdio.h> //Area of Circle

float r,area;

int main()
{

    printf("Enter the radius of the ciricle -  ");
    scanf("%f", &r);
    area=3.14159265*r*r;  //Formula of area
    printf("%f is the area of a circle with %f radius",area,r);
}
