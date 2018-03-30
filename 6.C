#include<stdio.h>
#include<conio.h>
struct courserec
{
char subcode[6];
char subtitle[50];
int subcredit;
int stuenroll;
};
struct courserec a;
void main()
{
printf("please enter the subject code\n");
scanf("%s",a.subcode);
printf("please enter the subject title\n");
scanf("%s",a.subtitle);
printf("please enter the subject credit\n");
scanf("%d",&a.subcredit);
printf("please enter the student roll number\n");
scanf("%d",&a.stuenroll);
printf("********************************\n");
printf("the subject code is %s\n",a.subcode);
printf("the subject title is %s\n",a.subtitle);
printf("the subject credit is %d\n",a.subcredit);
printf("the subject roll number is %d\n",a.stuenroll);
getch();

}

