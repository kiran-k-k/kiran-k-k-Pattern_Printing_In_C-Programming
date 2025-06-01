#include<stdio.h>
int main()
{
    int num, i, j;

    printf("enter number of rows: ");
    scanf("%d",&num);

    for(i = 0; i < num; i++)
    {
        for(j = 0; j < i; j++)
        {
            printf(" ");
        }
        for(j = 0; j < num - 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}