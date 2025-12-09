// inderpreet
// Factorial using recursion Function (max upto 20)
#include<stdio.h>

long long unsigned fact(long long unsigned x); 
int main()
{
    int a=5;
    printf("factorial = %llu",fact(a));  
}

long long unsigned fact(long long unsigned x)  
{
    if(x==0||x==1){
        return 1;
    }else{
        return x * fact(x-1); // Recursion
    } 
}