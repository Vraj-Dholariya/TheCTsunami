#include <stdio.h>
main()
{
    int n;
    
    printf("Enter array size:");
    scanf("%d",&n); 
    int a[n],squre[n];
    printf("Enter array elements: \n");
    for (int i = 0; i < n; i++)
    {
       printf("a[%d] = ",i);
       scanf("%d",&a[i]); 
    }
    printf("The squres are :");
   //logic
    for (int i = 0; i < n; i++)
    {
        squre[i]=a[i]*a[i];
    }
    //output
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",squre[i]);
    }  
}
