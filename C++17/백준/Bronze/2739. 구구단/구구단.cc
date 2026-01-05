#include <stdio.h>

int main(void) 
{
    int n;
    int a;
    scanf("%d", &n);
    for (int a = 1; a <= 9; a++)
    {
        printf("%d * %d = %d\n", n, a, n * a);
    }
}