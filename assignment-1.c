#include <stdio.h>
void main()
{
    int n;
    printf("Enter number of lines\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
