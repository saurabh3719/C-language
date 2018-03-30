//c programme to read an array and search for an element//
#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,n;
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
printf("please enter index number of the element which you want\n");
scanf("%d",&i);
printf("the concerned element is %d",a[i]);
getch();
}