 #include<stdio.h>
 #include<conio.h>
 #include<string.h>
 void main()
  {
  int len;
  clrscr();
  len= strspn ("this is test","is");
  printf("%d\n",len);
  getch();
  }