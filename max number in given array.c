#include<stdio.h>  //largest number in array
int main()
{ int n,m,i,j,max;

    printf("enter length of array:");
    scanf("%d", &n);
 int arr[n];
 for(i=0;i<=n;i++)
 {
    printf("\nEnter %d of array = ", i+1);
    scanf("%d", &arr[i]);

 }
  max=arr[0];
for(i=0;i<=n;i++){
        if(max<=arr[i])
        max=arr[i];
        }
printf("MAX number is : %d", max);
return 0;


}
