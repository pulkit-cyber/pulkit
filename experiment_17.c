#include <stdio.h>

int main() {
    int arr[2][3], i, j;

    printf("Enter elements for 2x3 Matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("Enter arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The 2D array is:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
