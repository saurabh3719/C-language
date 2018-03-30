#include<stdio.h>
#include<conio.h>
void main()
{
	int i,count=0,j,a[5],b[5];
	clrscr();
	printf("enter the elements of an array");

	for(i=0;i<5;i++)
     {
	 scanf("%d",&a[i]);
	 b[i]=a[i];
     }
    for(i=0;i<5;i++)
    {
    for(j=1;j<5;j++)
    {
    if(a[i]!=b[j])
    {
    count++;
    }
    else
    {
    continue;
    }
    }
    }
     printf("the number of non repeated elements are %d\n",count);
getch();
}