#include <stdio.h>
#include <stdlib.h>
int sum(int array[])
{
    int sum = 0;
    for (int i = 0; i < 20; i++)
    sum += array[i];

    return sum;
}
int main()
{
    int array[20], i;
    printf("Enter 20 Numbers\n");
    for (i = 0; i < 20; i++)
      scanf("%d", &array[i]);

    printf("Resultant array is\n");
    for (i = 0; i < 20; i++)
        printf("%d\n", array[i]);

    printf("Sum of given array is %d", sum(array));
    }

