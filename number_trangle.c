#include<stdio.h>
int main()
{
    int num, i, j;

    printf("enter number of rows: ");
    scanf("%d",&num);

    for(i = 1; i <= num; i++)
    {
        for(j = num; j > i; j--)
        {
            printf(" ");
        }
        for(j = i; j >= 1; j--)
        {
            printf("%d ",i);
        }
        printf("\n");
    }

    return 0;
}