#include<stdio.h>
int swap(int*a,int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    return swap;
}
int main()
{
    int x,y;
    printf("Enter the value of x:");
    scanf("%d", &x);
      printf("Enter the value of y:");
    scanf("%d", &y);
    swap(&x,&y);
    printf("x=%d\ny=%d",x,y);
    return 0;
}
