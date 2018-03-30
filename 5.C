
#include<stdio.h>
#include<conio.h>
struct date
{
int dd;
int mm;
int yy;
};
struct date x;
void main()
{
clrscr();
printf("enter the date\n");
scanf("%d",&x.dd);
printf("enter the month\n");
scanf("%d",&x.mm);
printf("enter the year\n");
scanf("%d",&x.yy);
	if((1<=x.dd<=30)&&(x.mm==9)&&(x.yy=2012))
{
printf("your info is correct now lets increment the date by one unit\n");
printf("the required date after incrementing by one is %d/%d/%d\n",x.dd+1,x.mm,x.yy);
}
else
{
printf("sorry sir you have entered invalid date\n");
}
getch();
}
