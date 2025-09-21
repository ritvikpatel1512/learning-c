#include<stdio.h>
int main()
{
   int n,m, count_max=0,i,j,q;  //Data for first matrix
    printf("\nEnter no of rows and column=");
        scanf("%d%d", &n,&m);
        printf("\n\n");
        printf("This is the program to check maximum\n number of 1 in matrix made up of 0-1\nso pls enter number from 0 and 1");
        printf("\n");
       int p[n][m];
        for(int i=0;i<n;i++)
        {
        for(int j=0;j<m;j++)
        {
        scanf("%d", &p[i][j]);

        }}
        for(int i=0;i<n;i++)

        { int count=0;
        for(int j=0;j<m;j++)
        {
        if(p[i][j]==1)
        {count=count+1;}}
        if(count>count_max)
        {
            count_max=count;
            q=i;
        }

}
 printf("Row is %d and max number is %d", q+1,count_max);
 return 0;


}


