/*Aurthor--Yashodip Beldar
  Date--23/7/2022
  Purpose--To print assignment 123.
*/
#include <stdio.h>
void main()
{
    int n;
    printf("Enter number of lines\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        
        for (int k = 1; k <= i; k++)
        {
                printf("%d", k);
        }
        printf("\n");
    }
}
