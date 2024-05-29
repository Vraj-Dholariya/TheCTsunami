#include <stdio.h>
#include <conio.h>
main()
{
	int a=10,b=12;

	clrscr();
	a=a+b;
	b=a-b;
	a=a-b;

	printf("A\t : %d\n",a);


	printf("B\t : %d\n",b);

	getch();
}