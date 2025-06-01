#include<stdio.h>
int main()
{
    int i, j, num;

    printf("enter number of rows :");
    scanf("%d",&num);

    for(i = 0; i < num; i++)
    {
        for(j = i; j < num - 1; j++)
        {
            printf("  ");
        }

        for(j = 0; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
        
    }
}