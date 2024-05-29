#include <stdio.h>
#include <conio.h>
main()
{
	int a;
	clrscr();
	printf("Enter any number :");
	scanf("%d",&a);
	if(a<0)
	{
		printf("%d is negative number",a);

	}
	else if(a>0)
	{
		printf("%d is positive number",a);

	}
	else
	{
		printf("%d is neutral number",a);

	}
	getch();
}