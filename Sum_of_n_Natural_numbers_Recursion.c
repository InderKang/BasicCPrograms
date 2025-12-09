// inderpreet
// Sum of n natural numbers using recursion Function
#include<stdio.h>


int sum(int x); 
int main()
{
    int a=10;
    printf("sum = %d",sum(a));  
}

int sum(int x)  
{
    if(x!=0){
        return x + sum(x-1); // Recursion
    }else{
        return x;
    } 
}