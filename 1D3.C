//c programme to find largest element in an element//
#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],large,i,n;
clrscr();
printf("please enter how many elements you want in array\n");
scanf("%d",&n);
printf("please enter the required array\n");
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
 }
printf("your entered array is displayed below\n");
printf("*************************************\n");
for(i=0;i<n;i++)
{
 printf("%d\n",a[i]);
 }
large=a[0];
for(i=0;i<n;i++)
{
if(large<a[i])
{
large=a[i];
}
}
printf("the concerned largest element is %d",large);
getch();
}