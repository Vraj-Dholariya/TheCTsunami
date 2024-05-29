 #include <stdio.h>

 #include <conio.h>
 main()
 {
	float a,b,c,e,f;
	float d=100;
	clrscr();
	printf("enter amount :");
	scanf("%f",&a);
	printf("enter rate of interest :");
	scanf("%f",&b);
	printf("enter time for interest :");
	scanf("%f",&c);
	e=a*b*c;
	f=e/d;
	printf("amount of interest is : %f",f);
	getch();

 }