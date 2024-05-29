#include <stdio.h>
#include <conio.h>
main()
{
	int n,count=0;
	clrscr();
	printf("Enter any number :");
	scanf("%d",&n);
	while(n>0)
	{
		n=n/10;
		count++;
	}
	printf("total number of digit is : %d",count);

	getch();
}