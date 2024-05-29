#include <stdio.h>
#include <conio.h>
main()
{
	int a=10,b=12;
	int c;
	
	c=a;
	a=b;
	b=c;

	printf("A\t : %d\n",a);


	printf("B\t : %d\n",b);

	getch();
}