#include<stdio.h>


int main()
{   int a,b;
    printf("enter 1st number: ");
    scanf("%d",&a);
    printf("enter 2nd number: ");
    scanf("%d",&b);
    if(a>b)
    {
        printf("Bigger number is %d\n",a);
        printf("smaller number is %d\n",b);
    }
    else if(b>a)
    {
        printf("l number is %d\n",b);
        printf("smaller number is %d\n",a);
    } else if(a==b) {
        printf("both numbers are equal\n");
    }
    else {
        printf("invalid input\n");
    }
}
