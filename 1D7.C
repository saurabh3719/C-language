//input an array and find difference of elements and print//
#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i,n,large,small,difference;
clrscr();
printf("please enter number of elements you want in array\n");
scanf("%d",&n);
printf("please enter the required numbers\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
large=a[0];
for(i=0;i<n;i++)
{
 if(large<a[i+1])
 {
 large=a[i+1];
 }
 }
 printf("the largest number is %d\n",large);

 small=a[0];
 for(i=1;i<n;i++)
{
 if(small>a[i])
 {
 small=a[i];
 }
 }

 printf("the smallest number is %d\n",small);
 difference=large-small;
 printf("the difference between the largest and smallest number if %d\n",difference);
 getch();
 }
