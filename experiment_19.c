#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello";
    char str2[20] = "World";
    char str3[20];

    // strlen
    printf("Length of str1: %zu\n", strlen(str1));

    // strcpy
    strcpy(str3, str1);
    printf("str3 after strcpy: %s\n", str3);

    // strcat
    strcat(str1, str2);
    printf("str1 after strcat: %s\n", str1);

    // strcmp
    if (strcmp(str1, str3) == 0) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are different.\n");
    }

    return 0;
}
