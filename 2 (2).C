#include<stdio.h>
#include<conio.h>
#include<string.h>
   void main()
    {
    int j=0,l,cou=0;
    char s[100];
    clrscr();
    printf("enter the string");
    scanf("%s",s);
    l=strlen(s);
    while(j<l)
    {
    if (s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')
     {
       printf("%c",s[j]);
       cou++;
       break;
     }
     j++;
     }

     printf("no of vovels are %d and consonents are %d ",cou,l-cou);
     getch() ;
     }