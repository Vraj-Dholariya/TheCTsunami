#include <conio.h>
main()
{
	int a,b;
	clrscr();
	printf("Enter first number :");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);
	a=a*b;
	b=b/a;
	a=a/b;
	printf("A is \t : %d \n",a);
	printf("B is \t : %d",b);
	getch();


}
