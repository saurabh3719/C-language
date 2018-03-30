#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],b[10][10];
int i,j,r1,c1,u,v,w,x,y,z;
clrscr();
printf("please enter number of rows and columns you want in your first  array\n");
scanf("%d%d",&r1,&c1);
printf("now lets scan our required elements for matrix A\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&a[i][j]);
b[i][j]=a[i][j];
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
printf("enter the two rows which you want to interchange is\n");
scanf("%d%d",&u,&v);
for(i=0;i<r1;i++)
{
y=a[u-1][i];
a[u-1][i]=a[v-1][i];
a[v-1][i]=y;
}
printf("enter the two columns which you want to interchange is\n");
scanf("%d%d",&w,&x);

for(i=0;i<c1;i++)
{
z=b[i][w-i];
b[i][w-i]=b[i][x-i];
b[i][x-i]=z;
}

printf("the first matrix after interchanging rows\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("%d ",a[i][j]);
}
printf("\n");
}
printf("the second  matrix after interchanginf rows\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("%d",b[i][j]);
}
printf("\n");
}

getch();
}

