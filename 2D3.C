#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10];
int i,j,sum=0,r1,c1,flag;
clrscr();
printf("please enter number of rows and columns you want in your first  array\n");
scanf("%d%d",&r1,&c1);
printf("now lets scan our required elements for matrix A\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("the matrix a is\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("%d",a[i][j]);
}
printf("\n");
}
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
if(a[i][j]!=0&&a[j][i]!=1)
{
flag=1;
}
}
}
if(flag==1)
{
printf("it is not a identity matrix\n");
 }
 else
 {
 printf("yes it is a identity matrix");
 }

getch();
}

