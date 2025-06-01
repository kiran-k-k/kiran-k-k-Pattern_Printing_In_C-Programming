#include<stdio.h>
int main()
{
    int num, i, j, k = 1;

    printf("enter numnbeer of rows :");
    scanf("%d",&num);

    for(i = 0; i < num; i++)
    {
        for(j = 0; j <= i; j++)
        {
            printf("%d ",k);

            if(k == 1)
            {
                k--;
            }
            else{
                k++;
            }
        }
        
        if(i % 2 == 0)
        {
            k = 0;
        }
        else{
            k = 1;
        }
        printf("\n");
    }

    return 0;

}