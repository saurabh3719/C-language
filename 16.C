   #include<stdio.h>
   #include<conio.h>

   void main()
   {
   int d1,d2,d3,d4;
   char s1[10]="abcdefghi" ;
   char s2[10]="ace";
   char s3[10]="defg";
   clrscr();
   d1=strspn (s1,s2);
   d2=strspn (s1,s3);
   d3=strcspn (s1,s2);
   d4=strcspn (s1,s3);
   printf("%d %d %d %d\n",d1,d2,d3,d4);
   getch();
   }