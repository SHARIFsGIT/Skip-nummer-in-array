#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int N, i, j;

    printf("Size of the array: ");
    scanf("%d", &N);

    int array[N];
    printf("Value of the array: ");

    for (i=1; i<=N; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i=1; i<=N; i++)
    {
        for (j=1; j<=N+1; j++)
        {
            if(i == j)
            printf("%d - ", array[i]);
        }
        for (j=1; j<=N; j++)
        {
            if(array[i] != array[j])
                printf("%d ", array[j]);
        }
        printf("\n");
    }

    return 0;
}
