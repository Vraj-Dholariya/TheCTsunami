#include <stdio.h>
#include <conio.h>
main()
{
	float a,b,c,d,e,f;
	clrscr();
	printf("Enter a value of X \t:");
	scanf("%f",&a);
	printf("Enter a value of Y \t :");
	scanf("%f",&b);
	c=a*a;
	d=2*a*b;
	e=b*b;
	f=c-d+e;
	printf("Ans is\t: %.2f",f);
	getch();
}