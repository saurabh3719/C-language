// DOUBLE HASHING

#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],b[100],i,n,t,offset,key,pos;
clrscr();
clrscr();
printf("enter the size of table");
scanf("%d",&t);
printf("enter no of elements") ;
scanf("%d",&n);

 for (i=0;i<n;i++)
 {

  b[i]=0;
  }
printf("enter the elements") ;
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]) ;
 }

  for (i=0;i<n;i++)
  {
    key=a[i];
    pos=key%t ;
    if (b[pos]==0)
    {
     b[pos]=a[i];
     }
     else
     {
     while(b[pos]!=0 && i<t)
     {
      offset=8-(key%8);
      pos=(offset+key)%t;
     x: if (b[pos]==0)
      {
	b[i]=a[i];
	break;
	}
	else
	{
	while(b[pos]!=0)
	{
	pos=pos+offset;
	}
	goto x;
	}
	}

	}
	}
	printf("hash table is \n");
	for (i=0;i<t;i++)
	{
	 printf("%d \n ",b[i]);
	 }
	 getch();
	 }
