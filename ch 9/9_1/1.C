#include<stdio.h>
#include<conio.h>
#define P printf
main()
{
	int i,j;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}

		printf("\n");
	}
	getch();


}