#include <stdio.h>
#include <conio.h>
main()
{
	float a,c;
	float b=6.28;

	clrscr();
	printf("enter redius :");
	scanf("%f",a);
	c=a*b;
	printf("The perimeter of circle is : %.2f",c);

	getch();
}
