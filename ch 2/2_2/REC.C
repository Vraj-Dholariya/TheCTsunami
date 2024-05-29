#include <stdio.h>
#include <conio.h>
main()
{
	float a,b,c;
	clrscr();
	printf("enter lenght of rectangle :");
	scanf("%f",&a);
	printf("enter weight of rectangle :");
	scanf("%f",&b);
	c=a*b;
	printf("area of rectangle is : %.3f",c);
	getch();

}