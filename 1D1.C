//c programme to calculate sum and average of an array//
#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,n,sum=0,average;
clrscr();
printf("please enter how many elements you want in array\n");
scanf("%d",&n);
printf("please enter the required array\n");
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
 }
for(i=0;i<n;i++)
{
 sum=sum+a[i];
 }
printf("the sum is %d\n",sum);
printf("now lets find average\n");
average=(sum/n);
printf("the average is %d\n",average);
getch();
}