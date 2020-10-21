#include <stdio.h>

int main() {
    int input;
    int max;

    printf("Enter num:\n");
    scanf("%d", &input);
    max = input + 10;
    while (input <= max) {
        printf("%d ", input);
        input ++;
    }
    printf("\n");
}