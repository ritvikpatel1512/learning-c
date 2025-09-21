#include<stdio.h>
int main()
{ int n,m;  //Data for first matrix
        printf("Enter the data for 1st matrix:");
        printf("\nEnter no of rows and column=");
        scanf("%d%d", &n,&m);
       int p[n][m];
        for(int i=0;i<n;i++)
        {
        for(int j=0;j<m;j++)
        {printf("\nNumber in %d row and %d column:", i+1,j+1);
        scanf("%d", &p[i][j]);

        }}

    //Data for 2nd matrix

       int res[n][m];
      int q[n][m];
        printf("\nEnter the data for second element:");
        for(int i=0;i<n;i++)
        {
        for(int j=0;j<m;j++)
        {printf("\nNumber in %d row and %d column:", i+1,j+1);
        scanf("%d", &q[i][j]);
        }
}     printf("\n\n");
  // Data for 3rd matrix
     for(int i=0;i<n;i++)
        {
        for(int j=0;j<m;j++)
        { res[i][j]=p[i][j]+q[i][j];
            printf("%d ", res[i][j]);
        }
        printf("\n");}
        return 0;
}




