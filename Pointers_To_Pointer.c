// inderpreet
// Acces Value Using Pointer to Pointer
#include<stdio.h>
int main()
{
    int a=20;
    int *ptr=&a;
    int **ptr2=&ptr;
    printf("value of a = %d",**ptr2);
}
