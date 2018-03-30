#include<stdio.h>
#include<conio.h>
void main()
{
int a[5];
int i,l,r,sum,n,min_l,min_r,min_sum;
clrscr();
printf("also tell how many elements you want in your array\n");
scanf("%d",&n);
printf("please enter the array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
//initialisation of values//
min_sum=a[0]+a[1];
for(l=0;l<n-1;l++)
{
for(r=l+1;r<n;r++)
{
sum=a[l]+a[r];
if(min_sum>=sum)
{
min_sum=sum;
min_l=l;
min_r=r;
}
}
}
printf("the two elements whose sum is minimum is %d and %d",a[min_l],a[min_r]);
getch();
}
