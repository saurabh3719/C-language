//input an array and find missing elements in an array considering first 5 natural numbers and print//
#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i,x;
clrscr();
printf("please enter the required numbers\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
if(a[i+1]!=a[i]+1)
{
a[i+1]=a[i]+1;
}
}
printf("the correct array is\n");
for(i=0;i<6;i++)
{
printf("%d\n",a[i]);
}

 getch();
 }
