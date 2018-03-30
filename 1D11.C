//input an array and find pairs whose difference is n//
#include<stdio.h>
#include<conio.h>
void main()
{
int a[9],i,count=0,n;
clrscr();
printf("please enter the required numbers\n");
for(i=0;i<9;i++)
{
scanf("%d",&a[i]);
}
printf("enter the value of n\n");
scanf("%d",&n);
for(i=0;i<9;i++)
{
if(a[i+1]-a[i]==n)
{
printf("pair is=%d and %d\n");
count++;
}
}
printf("the correct array is\n");

 getch();
 }

