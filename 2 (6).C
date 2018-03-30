#include<stdio.h>
#include<conio.h>
#include<string.h>
char* nonwhite(char *);
void main()
{
char a[20];
char result[10];
printf("enter the required string\n");
scanf("%s",a);
result=nonwhite(a);
printf("the required string is %d\n",result);
getch();
}
char* nonwhite(char *mystring)
{
while((mystring[0]==' ')||(mystring[0]=='\t'))
{
mystring++;
}
return mystring;
}