//c programme to find find number of elements of an array//
#include<stdio.h>
#include<conio.h>
void main()
{
int a[30],count=0,i,n;
clrscr();
printf("please enter any arbitrary elements you want in array\n");
scanf("%d",&n);
printf("please enter the required array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
count++;
 }
printf("the total elements in the array are %d",count);
getch();
}