#include<stdio.h>
#include<conio.h>
void main()
{
static int a[10][10];
int i,j,r1,c1,counter=0;
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
if(a[i][j]==0)
{
counter++;
}
}
}
if(counter>(r1*c1)/2)
{
printf("the given matrix is sparse the %d elements represents it\n",counter);
}
else
{
printf("the given matrix is not sparse\n");
}
getch();
}

