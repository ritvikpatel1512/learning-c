#include <stdio.h>

int main()
{   float dollars, rupees;
    printf("Enter the number of rupees -  ");
    scanf("%f", &rupees);
    dollars = rupees/48.0;
    printf("%f INR is %f USD",rupees, dollars);
}
