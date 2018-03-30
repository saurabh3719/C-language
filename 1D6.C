//input an array and find alternate of elements and print//
#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],i,n;
clrscr();
printf("enter the number of elements you want in your array\n");
scanf("%d",&n);
printf("please enter the required numbers\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("your array is-\n");
for(i=0;i<n;i++)
{
printf("%d\n",&a[i]);
}

printf("your required alternate numbers are \n");

 getch();
 }
