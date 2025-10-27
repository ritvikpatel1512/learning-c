
#include<stdio.h>
#include<conio.h>
struct student{
char name[30];
int roll_no;
char grade;

};

int main()
{
   struct student arr[3];

for(int i=0;i<3;i++)
{

    printf("Name of studnet:");
    scanf("%[^\n]s", arr[i].name);
    fflush(stdin);
   printf("Roll no of student:");

    scanf("%d", &arr[i].roll_no);
    fflush(stdin);
    printf("grade of student:\n");

    scanf("%c", &arr[i].grade);

    fflush(stdin);
}
for(int i=0;i<3;i++)
{   printf("\nName of studnet:%s",arr[i].name);
    printf("\nRoll no student:%d",arr[i].roll_no);
    printf("\ngrade of student:%c",arr[i].grade);
    printf("\n\n");

}
return 0;
}






