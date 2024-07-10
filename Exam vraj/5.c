#include<stdio.h>

struct House
{
  int room_quantity;
  int established_year;
  char city[20];
};


int main()
{
    int n;
    printf("Enter number of house: ");
    scanf("%d",&n);
    struct House h[n];
    printf("\n");
    for (int i = 0; i < n; i++)
    {
      printf("House number: %d\n",i+1);
      printf("Enter number of rooms:");
      scanf("%d",&h[i].room_quantity);
      printf("Enter year of established of house:");
      scanf("%d",&h[i].established_year);
      fflush(stdin);
      printf("Enter your city name :");
      scanf("%[^\n]",&h[i].city);
      printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
       printf("House no=%d\n",i+1);
       printf("Number of room: %d\n",h[i].room_quantity);
       printf("Established year: %d\n",h[i].established_year);
       printf("City name: %s",h[i].city);
       printf("\n\n");
    }   

}
