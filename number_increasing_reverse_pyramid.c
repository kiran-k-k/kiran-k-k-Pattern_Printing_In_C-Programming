#include<stdio.h>
int main()
{
    int num, i, j;

    printf("enter the number of rows:");
    scanf("%d",&num);

    for(i = num; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}