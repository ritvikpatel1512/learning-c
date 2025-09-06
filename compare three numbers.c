#include<stdio.h>
int main()
{
        float a,b,c;
        printf("1st number: ");
        scanf("%f", &a);
        printf("2nd Number: ");
        scanf("%f", &b);
        printf("3rd number: ");
        scanf("%f", &c);

        if(a>b && a>c)
        {
            printf("Largest %f\n", a);
        if(b==c)
        {
            printf("\nSmallest are both %f", b);
        }}
        if(b>c&&b>a)
        {
            printf("Largest is %f\n", b);
        if(c==a)
        {
            printf("Both are Smallest %f\n", a);
        }
        }
        if(c>a&&c>b)
        {
            printf("Largest %f\n", c);
        if(a==b)
        {
            printf("Both are smallest %f\n", a);
        }
        }
        if(a<b&&a<c)
        {
            printf("Smallest is %f\n", a);
        if(b==c)
        {
            printf("Both are largest %f\n", b);

        }}
        if(b<a&&b<c)
        {
            printf("Smallest is %f\n", b);
        if(a==c)
        {
            printf("Both are largest no are %f\n", a);
        }
        }
        if(c<a&&c<b)
        {
            printf("smallest number is %f\n", c);
        if(a==b)
        {
            printf("Both are largest %f\n", a);
        }
        }
        return 0;


}
