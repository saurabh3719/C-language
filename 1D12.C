//input an array and find alternate of elements and print//
#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],b[20],i,n,j;
clrscr();
printf("enter the number of elements you want in your array\n");
scanf("%d",&n);
printf("please enter the required numbers\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
b[i]=a[i];
}
printf("your array is-\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
for(i=0;i<n;i++)
{
for(j=1;j<n;j++)
{
if(a[i]!=b[j])
{
printf("the non repeated number is %d\n",a[i]);
 }
 else
 {
 printf("there is no non-repeated number\n");
 }
 }
 }
 getch();
 }
