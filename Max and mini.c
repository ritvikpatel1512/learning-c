#include<stdio.h>
int main()
{
    int arr[]={0,1,5,7,3,4};
    int *p=arr;
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<6;i++)
    {

    if(*(p+i)>=max)
    max=*(p+i);
    else if(*(p+i)<=min)
    min=*(p+i);
    }
    printf("max=%d\nmin=%d",max,min);
    return 0;
}
