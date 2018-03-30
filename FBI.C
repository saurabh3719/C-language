#include<stdio.h>
#include<conio.h>
  int main()
  {
  char s[5]={'q','w','e','r','t'},pw[5];
  int tr=0,maxtry=3,i;
   clrscr();
  while(tr<maxtry)
    {
      printf("enter the password");
      for(i=0;i<5;i++)
       {
       scanf("%c",&pw[i]);
       printf("*");
       getch();
       }
       tr++;
    for(i=0;i<5;i++)
      {
	if(pw[i]==s[i])
	{
	  printf("welcome to FBI file ststem") ;
	  exit(0);
	 }
	else
	 {
	  printf("wrong password");
	  if (tr==maxtry)
	    {
	      printf("locked out");
	      exit(0);
	      }
	   else if (tr==(maxtry-1))
	   printf("%d more try.\n",maxtry-tr);
	   else
	   printf("%d more tries.\n",maxtry-tr) ;
	   }
	   }
	   }
	   return 0;
       }






