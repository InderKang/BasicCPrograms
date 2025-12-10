// inderpreet
// Calculator using Switch-case
#include<stdio.h>
#include<stdlib.h>

int main(){
    int num1, num2, result, choice;
    printf("Enter First Number: ");
    scanf("%d",&num1);
    printf("Enter Second Number: ");
    scanf("%d",&num2);
    printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Divison\n Select Option:\n ");
    scanf("%d",&choice);

    switch(choice){
        case 1:
          result=num1+num2;
          break;
        case 2:
          result=num1-num2;
          break;
        case 3:
          result=num1*num2;
          break;
        case 4:
          if(num2==0){
            printf("can't divide with 0");
             exit(EXIT_FAILURE);
            }
          result=num1/num2;
          break;
    }
    printf("Result = %d",result);
}