// 10. Write a program to print a table of 5.

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",5*i);
    }
    return 0;
}