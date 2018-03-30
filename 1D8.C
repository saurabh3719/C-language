//input an array and increment every element of array by one and print//
#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i;
clrscr();
printf("please enter the required numbers\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("the incremented array is=\n");

for(i=0;i<5;i++)
{
a[i]=a[i]+1;
}
for(i=0;i<5;i++)
{
printf("%d\n",a[i]);
}

 getch();
 }
