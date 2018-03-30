#include<stdio.h>
#include<conio.h>
void main()
{
static int a[10][10];
int i,b,m,j,r1,c1;
clrscr();
printf("please enter number of rows and columns you want in your first  array\n");
scanf("%d%d",&r1,&c1);
if(r1==c1)
{
printf("now lets scan our required elements for matrix A\n");
for(i=0;i<r1;++i)
{
for(j=0;j<c1;++j)
{
scanf("%d",&a[i][j]);
}
}
printf("the matrix a is\n");
for(i=0;i<r1;++i)
{
for(j=0;j<c1;++j)
{
printf("%d",a[i][j]);
}
printf("\n");
}
for(i=0;i<r1;++i)
{
b=a[i][i];
a[i][i]=a[i][m-i-1];
a[i][m-i-1]=b;
}
printf("the new array is\n");
for(i=0;i<r1;++i)
{
for(j=0;j<c1;++j)
{
printf("%d",a[i][j]);
}
printf("\n");
}

}
else
{
printf("sorry the order doesnot suit");
}
getch();
}

