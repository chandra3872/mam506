#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *ptr;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    ptr = (int*)malloc(n * sizeof(int));
    if (ptr == NULL) return 1;

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) scanf("%d", (ptr + i));

    printf("\nEven Numbers: ");
    for (int i = 0; i < n; i++) if (*(ptr + i) % 2 == 0) printf("%d ", *(ptr + i));

    printf("\nOdd Numbers: ");
    for (int i = 0; i < n; i++) if (*(ptr + i) % 2 != 0) printf("%d ", *(ptr + i));

    free(ptr);
    return 0;
}
