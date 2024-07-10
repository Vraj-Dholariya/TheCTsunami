#include<stdio.h>
int reverse(int *ptr);
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    int *ptr;
    ptr=&n;
    reverse(&n);
}
int reverse(int *ptr)
{
    int rem,rev=0;
    while (*ptr!=0)
    {
    rem=*ptr%10;
    rev=rev*10+rem;
    *ptr=*ptr/10;
    }  
     printf("Reverse number is = %d",rev);
}
 