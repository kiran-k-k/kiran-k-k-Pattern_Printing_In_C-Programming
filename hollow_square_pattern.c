#include<stdio.h>
int main()
{
    int num, i, j, k;
     
    printf("enter number of rows:");
    scanf("%d",&num);

    for(i = 0; i < num; i++)
    {
        for(j = 0; j < num - 1; j++)
        {
            if((i == 0 || i == num - 1) || (j == 0 || j == num - 2))
            {
                printf("* ");
            }
            else{
                printf("  ");
            } 
        }
        printf("\n");
    }

    return 0;
}