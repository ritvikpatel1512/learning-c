#include<stdio.h>
int main()
{   int m1,m2,m3;
    float avg;
    printf("Enter marks 1st of subject:");
    scanf("%d",&m1);
        printf("Enter marks 2nd of subject:");
      scanf("%d",&m2);
          printf("Enter marks 3rd of subject:");
        scanf("%d",&m3);
    avg = (m1 + m2 + m3) / 3.0;
    printf("The average of the three subjects is : %f\n", avg);
}
