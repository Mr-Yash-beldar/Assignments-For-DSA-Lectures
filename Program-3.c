/*
    Aurthor--Yashodip Beldar
    Date--23/7/2022
    Purpose--Printing pattern hallow square.
*/
#include <stdio.h>
void main()
{
    int i, k, n;
    printf("Enter side ");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= n; k++)
        {
            if (i == 1 || i == n || k == 1 || k == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}