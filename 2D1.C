#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10];
int i,j,sum=0,r,c;
clrscr();
printf("please enter number of rows you want in your array\n");
scanf("%d",&r);
printf("please enter number of columns you want in your array\n");
scanf("%d",&c);
printf("now lets scan our required elements\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("now lets find sum\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
sum=sum+a[i][j];
}
printf("the sum of %dth row is %d\n",i,sum);
sum=0;
}
for(j=0;j<c;j++)
{
for(i=0;i<r;i++)
{
sum=sum+a[i][j];
}
printf("the sum of %dth column is %d\n",j,sum);
sum=0;
}
getch();
}

