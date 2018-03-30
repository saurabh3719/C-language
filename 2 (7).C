#include<stdio.h>
#include<conio.h>
int count(int[],int,int);
int result=0;
void main()
{
int a[20],length,num,i;
clrscr();
printf("please enter the length of the array\n");
scanf("%d",&length);
printf("please enter the array\n");
for(i=1;i<=length;i++)
{
scanf("%d",&a[i]);
}
printf("please enter the number which has to be counted\n");
scanf("%d",&num);
result=count(a,length,num);
printf("the required no. %d is %d times present\n",num,result);
getch();
}
int count(int b[],int l,int num)
{
int i,c;
if(l>0)
{
if(num==b[l])
{
result++;
}
l--;
count(b,l,num);
return result;
}
else
{
return result;
}
}