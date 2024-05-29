#include<stdio.h>
#include <conio.h>
main()
{
	int a;
	float pi =3.14;
	char ch;
	clrscr();
	printf("enter any number :");
	scanf("%d",&a);
	printf("enter pi value :");
	scanf("%f",&pi);
	fflush(stdin);
	printf("enter any character :");
	scanf("%c",&ch);
	printf("\n");
	printf ("A\t: %d\n",a);
	printf ("PI\t: %.2f\n",pi);
	printf ("CH\t: %c\n",ch);
	getch();






}