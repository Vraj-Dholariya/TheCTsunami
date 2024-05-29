#include <stdio.h>
#include <conio.h>
main()
{
	float a,b,c,e;
	float d=2;
	clrscr();
	printf("enter base of tringle :");
	scanf("%f",&a);
	printf("enter other base of tringle :");

	scanf("%f",&b);
	c=a*b;
	e=c/d;
	printf("area of tringlr is : %.3f",e);
	getch();

}