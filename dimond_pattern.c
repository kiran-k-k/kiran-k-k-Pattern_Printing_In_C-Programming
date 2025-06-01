#include<stdio.h>
int main()
{
    int num, i, j, k, l = 1;

    printf("enter number of rows :");
    scanf("%d",&num);

    if(num % 2 == 0)
    {
        goto end;
    }
 
    k = num / 2;

    for(i = 0; i < num; i++)
    {
        for(j = k; j > 0; j--) 
        {
            printf(" ");
        }
        for(j = l; j > 0; j--)
        {
            printf(" *");
        }

        if(i < num / 2)
        {
            k--;
            l++;
        }
        else{
            k++;
            l--;
        }
        printf("\n");
    }
    
    end : printf("use odd number only");
}