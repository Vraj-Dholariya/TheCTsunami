#include <stdio.h>
int sum(int n1, int n2);
int sub(int n1, int n2);
int mult(int n1, int n2);
int divi(int n1, int n2);
int modulus(int n1, int n2);
main()
{
    int i, n1, n2;
    do
    {
        printf("\n\npress 1 for +\n");
        printf("press 2 for -\n");
        printf("press 3 for *\n");
        printf("press 4 for /\n");
        printf("press 5 for %% \n");
        printf("press 0 for the exit\n\n");

        printf("Enter your choice: ");
        scanf("%d", &i);
       if(i!=0)
       {
            printf("Enter the first number: ");
            scanf("%d", &n1);
            printf("Enter the second number: ");
            scanf("%d", &n2);
       }
        switch (i)
        {
        case 1:
            sum(n1, n2);
            break;

        case 2:
            sub(n1, n2);
            break;

        case 3:
            mult(n1, n2);
            break;

        case 4:
            divi(n1, n2);
            break;

        case 5:
            modulus(n1, n2);
            break;
        case 0:
           printf("Your are exited...");
        }
    } while (i != 0);
}
int sum(int n1, int n2)
{
    printf("addision of %d and %d is: %d", n1, n2, n1 + n2);
}
int sub(int n1, int n2)
{
    printf("substraction of %d and %d is: %d", n1, n2, n1 - n2);
}
int mult(int n1, int n2)
{
    printf("multiplication of %d and %d is: %d", n1, n2, n1 * n2);
}
int divi(int n1, int n2)
{
    printf("division of %d and %d is: %d", n1, n2, n1 / n2);
}
int modulus(int n1, int n2)
{
    printf("modulus of %d and %d is: %d", n1, n2, n1 % n2);
}