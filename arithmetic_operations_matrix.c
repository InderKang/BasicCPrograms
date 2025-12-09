// inderpreet
// Arithmetic Opertaions on Two-dimensional nxn matrix
#include<stdio.h>
int main()
{   int n=2;
    int a[n][n], b[n][n], c[n][n];
    int i,j;
    // initialisation
    printf("Enter Elements of Matrix a:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
          scanf("%d",&a[i][j]);
        }
    }
    printf("Enter Elements of Matrix b:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
          scanf("%d",&b[i][j]);
        }
    }

    // Operations 
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
          c[i][j]=a[i][j] + b[i][j];  // (use +,-,*,/ as per required)
        }
    }

    // print matrix
    printf("Matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
          printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}