#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n] ,*array[n];
    //input
    printf("Enter array elements: \n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    //logic
    for (int i = 0; i < n; i++)
    {
        array[i]=&a[i];
        *array[i]=*array[i]**array[i];
    }
    //output
    printf("Squre of each elements are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d,",*array[i]);
    }
    
}

