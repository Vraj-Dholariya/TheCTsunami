#include <stdio.h>
#include <conio.h>
main()
{
	float a,b,c;
	clrscr();
	printf("Enter first angle of tringle : ");
	scanf("%f",&a);
	printf("Enter second angle of tringle : ");
	scanf("%f",&b);
	c=180-(a+b);
	printf("third angle  is : %.2f",c);
	getch();



}
