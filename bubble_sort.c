#include <stdio.h>

int main() {
    int ar[10], i, j, n, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++){
        scanf("%d", &ar[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (ar[j] > ar[j + 1]) {
                temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
    }

    printf("The sorted array is: ");
    for (i = 0; i < n; i++) {
        printf("%d, ", ar[i]);
    }

    return 0;
}
