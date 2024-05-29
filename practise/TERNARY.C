#include <stdio.h>
#include <conio.h>
main()

{
	int a,b,c,d;
	clrscr();
	printf("Enter first value\t : " );
	scanf("%d",a);
	printf("Enter second value\t : " );
	scanf("%d",b);
	printf("Enter third value\t : " );
	scanf("%d",c);
	printf("Enter forth value\t : " );
	scanf("%d",d);

	(a>b)
	?(a>c)
		?(a>d)
			?printf("%d is max",a)
			:printf("%d is max",d)
		:(c>d)
			?printf("%d is max",c)
			:printf("%d is max",d)
	:(b>c)
		?(b>d)
			?printf("%d is max",b)
			:printf("%d is max",d)
		:(c>d)
			?printf("%d is max",c)
			:printf("%d is max",d);

	getch();
}
