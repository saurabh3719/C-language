//input an array store the squares of elements and print//
#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],n,i;
clrscr();
printf("please enter the number of elements you want in array\n");
scanf("%d",&n);
printf("please enter the required numbers which are to be squared\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
a[i]=a[i]*a[i];
}
printf("***********************************************\n");
printf("the square of the numbers entered are\n");
for(i=0;i<5;i++)
{
printf("=%d\n",a[i]);
}
getch();
}
