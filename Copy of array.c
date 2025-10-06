#include<stdio.h>
int main()
{   int len,i;
    int arr_1[]={1,2,3,4,5};
    int *p=arr_1;
    len=sizeof(arr_1)/sizeof(arr_1[0]);
    int arr_2[len];
    int *p_1=arr_2;

    printf("Another array:");
    for(i=0;i<len;i++)
    {*(p_1+i)=*(p+i);
    printf("%d,", *(p_1+i));
    }
return 0;

}
