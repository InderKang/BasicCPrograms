// inderpreet
// User Defined Function
#include<stdio.h>

int sum(int x, int y); // declaration
int main()
{
    int a=10;
    int b=20;
    printf("sum = %d",sum(a,b));  // function call
}

int sum(int x, int y)  // func definition
{
    return x+y;
}