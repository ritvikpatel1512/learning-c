#include<stdio.h>

int main()
{

    int a[]={1,2,5,10,20,50,100,200,500};
    int n,i,j,m;
    printf("Enter the amount:");
    scanf("%d", &n );
    for(i=8;i>=0;i--)
      { m=n/a[i];
      printf("No of %d notes = %d\n", a[i],m);
        n=n%a[i];

        if(a[i]>n)
            continue;

      }
      return  0;
}
