#include<stdio.h>
int main()
{
   int n,m,sum=0,i,j,max_sum=-1111;
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
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
           { sum=p[i][j]+sum;}
           printf("\nSum of %d row is = %d", i+1,sum);
           if(sum>max_sum)
           {max_sum=sum;}
        }
        printf("\n\n");
        printf("Max sum among all raw is %d", max_sum);

        return 0;
        }
