#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],b[10][10],c[20][20];
int i,j,sum=0,r1,c1,r2,c2,flag;
clrscr();
printf("please enter number of rows and columns you want in your first  array\n");
scanf("%d%d",&r1,&c1);
printf("please enter number of columns you want in your array\n");
scanf("%d%d",&r2,&c2);
printf("now lets scan our required elements for matrix A\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("now lets scan our required elements for matrix B\n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
scanf("%d",&b[i][j]);
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
printf("the matrix b is\n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
printf("%d",b[i][j]);
}
printf("\n");
}
if(c1==r2)
{
printf("yes the two matrices can be multiplied\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
c[i][j]=a[i][j]*b[i][j];
}
}
printf("the product is\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
printf("%d ",c[i][j]);
}
printf("\n");
}

else
{
printf("the two matrices cannot be compared\n");
}
if(flag==0)
{
printf("the two matrices are not equal\n");
}
else
{
printf("the two matrices are  equal\n");
}
getch();
}

