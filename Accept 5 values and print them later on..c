#include<stdio.h> //1.	Accept 5 values and print them later on.
int  main()
{   int n,m,i,j;
    int value[5];
for(n=0;n<5;n++)
{
printf("Enter the %d numbers:", n);
scanf("%d", &value[n]);
}
printf("Numbers are:");
for(n=0;n<5;n++)
{
printf("\n%d", value[n]);
}

}
