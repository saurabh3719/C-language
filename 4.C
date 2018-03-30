#include<stdio.h>
#include<conio.h>
 struct complex
 {
	float real;
	float imaginary;
 }no[2];
struct complex add(struct complex no[0],struct complex no[1]);
void main()
{
	struct complex temp;
	printf("enter the real and imaginary part for first quantity\n");
	scanf("%f%f",&no[0].real,&no[1].imaginary);
	printf("enter the real and imaginary part for second quantity\n");
	scanf("%f%f",&no[0].real,&no[1].imaginary);
	temp=add(no[0],no[1]);
	printf("sum=%f+%fi",temp.real,temp.imaginary);
getch();
}
struct complex add(complex no[0],complex no[1])
{
struct complex temp;
temp.real=no[0].real+no[1].real;
temp.imaginary=no[0].imaginary+no[1].imaginary;
return(temp);
}
