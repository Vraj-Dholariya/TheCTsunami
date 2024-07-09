#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
  int id;
  char name[20];
  float age;
  char course[20];
  char city[20];
  int standard;
  char school[30];
};

int main() {
  int size;
  printf("Enter number of student :- ");
  scanf("%d", &size);

  struct student s1[size];
  for (int i = 0; i < size; i++) {
    printf("Enter the id of the student: ");
    scanf("%d", &s1[i].id);
    printf("Enter the name of the student: ");
    scanf("%s", &s1[i].name);
    printf("Enter the age of the student: ");
    scanf("%f", &s1[i].age);
    printf("Enter the course of the student: ");
    scanf("%s", &s1[i].course);
    printf("Enter the city of the student: ");
    scanf("%s", &s1[i].city);
    printf("Enter the standard of the student: ");
    scanf("%d", &s1[i].standard);
    printf("Enter the school of the student: ");
    scanf("%s", &s1[i].school);
    system("cls");
  }

  system("cls");
  printf("The details of the student are : \n ");
  for (int  i = 0; i < size; i++)
  {
    printf("The id of the student is %d\n", s1[i].id);
    printf("The name of the student is %s\n", s1[i].name);
    printf("The age of the student is %f\n", s1[i].age);
    printf("The course of the student is %s\n", s1[i].course);
    printf("The city of the student is %s\n", s1[i].city);
    printf("The standard of the student is %d\n", s1[i].standard);
    printf("The school of the student is %s\n", s1[i].school);
    }

  }
  

