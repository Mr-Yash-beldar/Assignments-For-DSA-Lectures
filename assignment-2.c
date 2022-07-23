#include <stdio.h>
void main()
{
    int n;
    printf("enter lines\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for(int g=0;g<n-i;g++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
