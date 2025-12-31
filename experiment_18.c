#include <stdio.h>

int main() {
    int arr[2][2], i, j, sum = 0;

    printf("Enter elements for 2x2 Matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    }

    printf("Sum of all elements: %d\n", sum);
    return 0;
}
