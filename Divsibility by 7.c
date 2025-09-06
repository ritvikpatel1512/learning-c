#include<stdio.h> //Divisibilty by 7



int main()
{
int num;
printf("enter number to check divisiblity with 7:");
scanf("%d",&num);
if (num%7==0)
    {
    printf("Entered number is divisible by 7");
}
else{
    printf("Entered number is not divisible by 7");
}
return 0;
}
