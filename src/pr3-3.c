#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n;
    float sum = 0;
    float count = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
        if (ptr[i] < 0)
        {
            printf("The number of the negative element %d : \n", i);
            sum += ptr[i];
            count++;
        }
    }

    float a = sum / count;
    printf("\n%f\n", count);
    printf("\nArithmetic mean of negative elements: %f\n", a);
    free(ptr);
    return 0;
}
