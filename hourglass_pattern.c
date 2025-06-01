#include<stdio.h>
int main()
{
    int num, i, j, k, l = 0;

    printf("enter number of rows:");
    scanf("%d",&num);

    if(num % 2 == 0)
    {
        goto end;
    }

    k = num / 2;

    for(i = 0; i < num; i++)
    {   
        if(i > num /2)
        {
            l--;
            k++;
        }
        else{
            l++;
            k--;
        }
        for(j = 0; j < l; j++)
        {
            printf(" ");
        }
        for(j = 0; j <= k + 1; j++)
        {
            printf(" *");
        }
       
        printf("\n");
    }

    end : printf("enter only odd number");

    return 0;
}