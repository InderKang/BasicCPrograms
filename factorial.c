// inderpreet
// Factorial
#include<stdio.h>
int main()
{
    int a=50;
    unsigned long long fact=1;
    int i;
    for(i=1;i<=a;i++){
        fact*=i;
    }
    printf("Factorial of %d is %llu",a,fact);
}
