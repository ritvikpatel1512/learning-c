#include<stdio.h>
int main()
{
   int n,m,max,min,i,j;  //Data for first matrix
        printf("Enter the data for 1st matrix:");
        printf("\nEnter no of rows and column=");
        scanf("%d%d", &n,&m);
       int p[n][m];
        for(int i=0;i<n;i++)
        {
        for(int j=0;j<m;j++)
        {
        scanf("%d", &p[i][j]);

        }}


        max=p[0][0];
        min=p[0][0];
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
           { if(p[i][j]>max)
            {max=p[i][j];}
            if(p[i][j]<min)
            {min=p[i][j];
            }

        }}
        printf("Max number is:%d\nMin number is %d:", max,min);
        }
