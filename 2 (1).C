#include<stdio.h>
#include<conio.h>
void swap (int*a,int*b)
  {
  int t;
  t=*a;
  *a=*b;
  *b=t;
  printf("first num is %d and second num is %d",*a,*b);

  }
  void main()
  {
  int a,b;
  clrscr();
  printf("enter two num");
  scanf("%d %d",&a,&b);
  swap(&a,&b);
  getch();
  }