#include <stdio.h>

 main()
{
   int first,second;

    printf("Enter the first number : ");
    scanf("%d",&first);
    printf("Enter the second number :");
    scanf("%d",&second);
    
    int leapYear[second-first];
    int count=0;

    for(int i=first;i<=second;i++)
    { 
            if( (i%4==0 && i%100!=0)||(i%400==0))
            {
                leapYear[count]=i;
                count++;
            }
    }        
    printf("The array is :");
    for (int i = 0; i < count; i++)
    {
       printf("%d\t",leapYear[i]);
    } 
}
