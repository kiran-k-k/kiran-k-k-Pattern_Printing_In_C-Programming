#include<stdio.h>
int main()
{
    int num, i, j, k = 1;

    printf("enter number of rows :");
    scanf("%d", &num);

    for(i = 0; i < num; i++)
    {
        for(j = 0; j <= i; j++)
        {
            printf("%d ",k++);
        }
        printf("\n");
    }

    return 0;
}