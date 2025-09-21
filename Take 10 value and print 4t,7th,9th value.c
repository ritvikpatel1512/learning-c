#include<stdio.h> //Accept 10 values and print 4th, 7th and 9th value.
int  main()
{   int n,m,i,j;
    int value[10];
for(n=0;n<10;n++)
{
printf("Enter the %d numbers:", n);
scanf("%d", &value[n]);
}
printf("\n4th Num:%d", value[3]);
printf("\n7th Num:%d", value[6]);
printf("\n9th Num:%d", value[8]);
}
