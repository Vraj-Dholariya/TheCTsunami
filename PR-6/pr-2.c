#include <stdio.h>
#include <string.h>
main()
{
    char name[20];
    int len = 0, count = 0;
    printf("Enter any string:");
    scanf("%[^\n]", &name);
    for (int i = 0; name[i] != NULL; i++)
    {
        len++;
    }
    printf("frequency of each letter:\n");
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (name[i] == name[j])
            {
                count++;
                name[j] = NULL;
            }
        }
        if (name[i] != NULL)
        {
            printf("\n %c ==> %d", name[i], count);
        }
    }
}