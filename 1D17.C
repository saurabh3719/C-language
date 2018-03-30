#include<stdio.h>
#include<conio.h>
void main()
{
int a[20];
int b[20];
int m,n,i,j;
clrscr();
printf("please enter how many elements you want in your first array\n");
scanf("%d",&n);
printf("please enter the array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("the first array is\n");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("please enter how many elements you want in your second array\n");
scanf("%d",&m);

printf("enter the second array\n");
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
}
printf("the second array is\n");

for(i=0;i<m;i++)
{
printf("%d",b[i]);
}
i=n;
j=0;
while(i<m+n&&j<m)
{
a[i]=b[m];
i++;
j++;
}
printf("the combined array is\n");
for(i=0;i<m+n;i++)
{
printf("%d",a[i]);
}
getch();
}