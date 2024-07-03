#include <stdio.h>
#include <string.h>
int main()
{
    char name[20];
    printf("Enter any string: ");
    scanf("%[^\n]", &name);
    int len;
    for ( len = 0; name[len] != '\0'; len++)
        ;
    
    int *ptr;
    ptr = &len;
    printf("The Length of string is\t: %d", *ptr);
}
