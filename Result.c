#include<stdio.h>  // Result out of 100
#include<stdlib.h>
int main()
{
        float a,b,c,avg;
        printf("1st Sub Marks : ");
        scanf("%f", &a);
        printf("2nd Sub Marks : ");
        scanf("%f", &b);
        printf("3rd Sub Marks: ");
        scanf("%f", &c);
        if(a<35)
        {
            printf("Sorry but you don't crack the exam");
            exit(0);
        }
        if(b<35)
        {
           printf("Sorry but you don't crack the exam");
            exit(0);
        }
        if(c<35)
        {
            printf("Sorry but you don't crack the exam");
            exit(0);
        }
        else
   {

        avg=a+b+c/3;

        if(avg>=70)
        {
        printf("Congo!!, You have passed with Distinction");
        exit(0);
        }
        if(avg>=60)
        {
        printf("You have got 1st");
        exit(0);
        }
        if(avg>=50)
        {
        printf("You have got 2nd");
        exit(0);
        }
        if(avg>=40){
        printf("You have got 3rd");
        exit(0);
        }
   }
}

