/*Aurthor--Yashodip Beldar
  Date--23/7/2022
  Purpose--To print pattern assignment.
*/
#include <stdio.h> 
void main()
{
    int n;
    printf("Enter number of lines\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            for (int k = 1; k <= i; k++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}