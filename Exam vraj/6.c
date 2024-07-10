#include<stdio.h>
int main()
{
    int n;
    char name[30],role[30];
    printf("Enter number of employees : ");
    scanf("%d",&n);
    printf("\n");
    FILE *fp;
    fp=fopen("data.txt","w");

    for (int i = 0; i < n; i++)
    {
       
        printf("Employee no: %d\n",i+1);
        fflush(stdin);
        printf("Enter Emplyee name: ");
        scanf("%[^\n]",&name);
        fflush(stdin);
        printf("Enter your role in staff: ");
        scanf("%[^\n]",&role);
        printf("\n");    
    }
    for (int i = 0; i < n; i++)
    {
        if (fp!='\0')
        {
        fprintf(fp,"Employee no: %d\n",i+1);
        fprintf(fp,"Enter Emplyee name: %s\n",name);
        fprintf(fp,"Enter your role in staff: %s\n",role);
        fprintf(fp,"\n");
        }
        else{
            printf("Unble to open file !!!");
        }
        
    }   
}
