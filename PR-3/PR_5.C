#include <stdio.h>
#include <conio.h>
main()
{
      int num,i,s=0;
      clrscr();
      printf("Enter number of term :");
      scanf("%d",&num);
      for(i=0;i<num;i++)
      {
		s=s*10+1;
		printf("%d\t",s);

      }
      getch();

}