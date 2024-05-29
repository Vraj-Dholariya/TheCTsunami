#include<stdio.h>
#include <conio.h>
main()
{
	int a=12;
	float pi=12.22u ;
	char ch;
	clrscr();
	printf("enter any number :");
	scanf("%d",&a);
	printf("your number is\t: %d\n",a);
	printf("Enter pi value :\n");
	scanf("%.2f",&pi);
	printf("PI value is\t : %f\n",pi);
	printf("enter any character :");
	fflush(stdin);
	scanf(" %c",&ch);
	printf("your character is : %c",ch);
	getch();






}