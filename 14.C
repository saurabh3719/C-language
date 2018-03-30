 #include<stdio.h>
 #include<conio.h>
 #include<string.h>
  void main ()
  {
  char *p;
  clrscr();

  p=strtok("the summer soldier , the sunshine patriot"," ");
  printf ("%s\n",p);
  do
  {
  p=strtok(NULL,",");
  if(p)
  printf ("%s \n",p);
  }
  while(p);
  getch();
  }