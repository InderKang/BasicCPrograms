// inderpreet
// String 
#include<stdio.h>
#include<string.h>
int main()
{
    char a[20]={"hello"};
    printf("size of a = %d\n",strlen(a));  //strlen (length measure)
    printf("%s\n",a);  // puts (print string)

    char b[10];
    strcpy(b,a);  //strcpy (copy)
    printf("%s\n",b);

    char c[]={"world"};
    strcat(a, c);  //strcat (append)
    printf("%s",a);
}