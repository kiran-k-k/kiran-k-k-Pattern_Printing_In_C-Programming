#include<stdio.h>
int main()
{
    int num, i, j, k = 1, l, m = 0;

    printf("enter number of rows :");
    scanf("%d", &num);

    for(i = 1; i <= num; i++)
    {   
        m = 0;
        l = i;
        for(j = num; j >= i; j--)
        {
            printf("  ");
        }
        for(j = 1; j <= k; j++)
        {
            printf("%d ", l);
            
            if(l != 1 && m == 0 )
            {
                l--;
            }
            else{
                l++;
                m = 1;
            }

        }

        k+=2;
        printf("\n");
    }
}