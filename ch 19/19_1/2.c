#include<stdio.h>
void swap(int *x,int *y);
int main()
{
    int x,y;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("Enter the value of y: ");
    scanf("%d",&y);
    swap(&x,&y);


    printf("X\t : %d\n",x);
    printf("Y\t : %d\n",y);

}
void swap(int *x,int *y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}