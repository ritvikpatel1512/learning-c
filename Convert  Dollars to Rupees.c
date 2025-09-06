#include <stdio.h>

float dollars, rupees;

int main()
{
    printf("Enter the number of dollars : ");
    scanf("%f", &dollars);
    rupees = dollars*48;
    printf("%f USD is %f INR",dollars, rupees);
}
