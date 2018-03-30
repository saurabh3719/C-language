#include<stdio.h>
#include<conio.h>
 void main()
 {
 int a[5],i;
 int *p;
 clrscr();
 p=&a[0];
 *p=0;
 for (i=0;i<5;i++)
   {
     a[i]=*p;
     }
     printf("value of elements of array are\n");

      for(i=0;i<5;i++)
      {
     printf("%d \n",a[i])    ;
     }
     getch();
     }