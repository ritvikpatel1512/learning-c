#include<stdio.h>
int main(){
int arr[]={10,20,30,40,50,60};
int len,i;
int *p=arr;
len=sizeof(arr)/sizeof(arr[0]);
printf("*P=%d ", *p);
printf("\nsize=%d", len );
for(i=len-1;i>=0;i--)
{
printf("\n%d ", *(p+i));

}
return 0;
}
