#include<stdio.h>
#include<conio.h>
#include<string.h>

 void main ()
   {
   char s1[10]="abcdefghi";
   char s2[10]="ace";
   char s3[10]="defg";
   char s4[10];
   clrscr();

   strcpy(s4,s2);
   strcat(s4,s3);
   strncat(s4, s1, sizeof(s4) - 1 - strlen (s2));
   printf("%s\n",s4);
   getch();
   }
