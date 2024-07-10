#include<stdio.h>
void main()
{

    int n,i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements: \n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    int min=a[0];
    for (int i = 1; i < n; i++)
    {
       if (a[i]<min)
       {
        min=a[i];
       }
    }
    printf("The smallest element of array is : %d",min);
}
    
