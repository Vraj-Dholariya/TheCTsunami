#include <stdio.h>
#include<string.h>
int stringLen(char a[])
{ 
    int len;
   for ( len = 0; len < a[len]!='\0'; len++)
    ;
    return len;
}
int main()
{
    char a[30];
    printf("Enter any string:");
    scanf("%[^\n]",&a);

    int length=stringLen(a);
    printf("Length is :  %d\n",length);
    return 0;
}