#include <stdio.h>
#include <conio.h>
main()
{
	int a,b,c;


	clrscr();
	printf("enter first value\t :");
	scanf("%d",&a);
	printf("enter second value\t :");
	scanf("%d",&b);
	printf("enter third value\t :");
	scanf("%d",&c);
	if (a==b&&b==c&&c==a)
	{

		printf("all values are same...!!!");

	}
	else if(a==0||a<0||b==0||b<0||c==0||c<0)
	{
		printf("you can't enter null or negative value...!!!");
	}
	else if (a==b||b==c||c==a)
	{
		printf("two values are same...!!!");

	}

	else
	{
	if(a<b)
	{
		if(a<c)
		{
			printf("%d is minimum ",a);
		}
		else
		{
			printf("%d is minimum ",c);
		}

	}
	else
	{
		if(b<c)
		{
			printf("%d is minimum",b);

		}
		else
		{
			printf("%d is minimum ",c);
		}
	}





	}


	getch();


}
