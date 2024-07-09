#include<stdio.h>
#include<stdlib.h>
struct employee {
    int id;
    char name[20];
    int age;
    char role [20];
    char city [20];
    char experience[20];
    char company [30];
};
int main()
{
    int size;
    struct employee e1[size];
    printf("enter number of student :- ");
    scanf("%d", &size);
    for(int i=0;i< size; i++){
        printf("enter id :- ");
        scanf("%d",&e1[i].id);
        printf("enter name :- ");
        scanf("%s", &e1[i].name);
        printf("enter age :- ");
        scanf("%d",&e1[i].age);
        printf("enter role :- ");
        scanf("%s", &e1[i].role);
        printf("enter city :- ");
        scanf("%s", &e1[i].city);
        printf("enter experience :- ");
        scanf("%s", &e1[i].experience);
        printf("enter company :- ");
        scanf("%s", &e1[i].company);
    }
    system("cls");
    printf("Details of the student are: \n");

    for (int i = 0; i < size; i++) {
        printf("id: %d\n", e1[i].id);
        printf("name: %s\n", e1[i].name);
        printf("age: %d\n", e1[i].age);
        printf("role: %s\n", e1[i].role);
        printf("city: %s\n", e1[i].city);
        printf("experience: %s\n", e1[i].experience);
        printf("company: %s\n", e1[i].company);
    }

    return 0;
}
