#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10];
int i,j,r1,c1;
clrscr();
printf("please enter number of rows and columns you want in your first  array\n");
scanf("%d%d",&r1,&c1);
printf("now lets scan our required elements for matrix A\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("the matrix a is\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("%d ",a[i][j]);
}
printf("\n");
}
printf("the lower triangular matrix is\n");
for(i=0;i<r1;i++)
{
printf("\n ");
for(j=0;j<c1;j++)
{
    if(i>=j)
    {
    printf("%d ",a[i][j]);
    }
    else
    {
    printf("\t");
    }

}
printf("\n");
}
printf("the upper triangular matrix is\n");
for(i=0;i<r1;i++)
{
printf("\n");
for(j=0;j<c1;j++)
{
    if(j>=i)
    {
    printf("%d ",a[i][j]);
    }
    else
    {
    printf("\t");
    }

}
printf("\n");
}
printf("\n");
getch();
}

