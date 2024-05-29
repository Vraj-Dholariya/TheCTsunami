#include <stdio.h>
#include <conio.h>
main()
{
	int a,b;
	clrscr();
	printf("Enter first number :");
	scanf("%d",&a);
	printf("Enter second number :");
	scanf("%d",&b);

	if(a<b)
	{
	printf("minimum number is  : %d",a);


	}
	else
	{
	printf("minimum number is  : %d",b);

	}
	getch();

}