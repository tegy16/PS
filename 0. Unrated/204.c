#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int *arr;
    int *p;
    int max, min;

    scanf("%d", &n);

    arr = (int *)malloc(sizeof(int) * n);

    for (p = arr; p < arr + n; p++)
        scanf("%d", p);

    max = min = *arr;

    for (p = arr + 1; p < arr + n; p++)
    {
        if (*p > max)
            max = *p;

        if (*p < min)
            min = *p;
    }

    printf("max : %d\n", max);
    printf("min : %d\n", min);

    free(arr);

    return 0;
}