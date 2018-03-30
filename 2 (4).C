
#include<stdio.h>
#include<conio.h>
#include<math.h>
 void arms(int);
 void prime(int) ;
 void main()
 {
  int a;
  clrscr();
  printf("enter the number");
  scanf("%d",&a);
    arms(a);
    prime(a);

  getch();
  }
  void arms (int a)
  {
  int b,sum=0,d;
     b=a;
  while (a!=0)
    {

     d=a%10;
     sum=sum+pow(d,3);
     a=a/10;
     }
     if (b==sum)
     printf("armstrong \n") ;
     else
     printf("Not armstrong \n");
     }

    void prime(int a)
    {
     int i;
     for(i=2;i<=(a/2);i++)
      {
      if(a%i==0)
      printf("Not prime num");

      else
      printf("prime number");
      break;
      }
      }


