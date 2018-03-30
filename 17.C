  #include<stdio.h>
  #include<conio.h>
  #include<string.h>

   int main()
     {
       struct gas
	  {
	    float distance ;
	    float gals;
	    float mpg;
	  }
       trip[3]={{1000.0,40.0,0},{400.0,15.0,0},{500.0,20.0,0}};
       struct gas *ps=trip;
       int cnt=1;
       char add[5];
       clrscr();

       while(ps<=&trip[2])
       {
	ps->mpg=ps->distance/ ps->gals;
	 switch(cnt)
	 {
	   case 1:
	   strcpy(add,"st");
	   break;
	   case 2:
	   strcpy(add,"nd");
	   break;
	   case 3:
	   strcpy (add,"rd") ;
	   }
	   printf("The %d %s calculated field is : %f\n",cnt,add,ps->mpg);
	   ps++;
	   cnt++;
	   }
	   getch();

	   return 0;


	   }

