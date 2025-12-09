// inderpreet
// Two-dimensional nxn matrix
#include<stdio.h>
int main()
{   int n=2;
    int a[n][n];
    int i,j;
    // initialisation
    printf("Enter Elements:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
          scanf("%d",&a[i][j]);
        }
    }

    // print matrix
    printf("Matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
          printf("%d",a[i][j]);
        }
        printf("\n");
    }
}