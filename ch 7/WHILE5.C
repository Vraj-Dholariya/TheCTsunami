#include<stdio.h>
#include <conio.h>
main()
{
	int a,b;
	clrscr();
	printf("Enter the first number :");
	scanf("%d",&a);
	printf("Enter the second number :");
	scanf("%d",&b);

	while (a<=b)
	{       if((a%4==0)&&(a%100!=0)||(a%400==0))
		{
		printf("%d\n",a);

		}
		a++;

	}
	getch();
}