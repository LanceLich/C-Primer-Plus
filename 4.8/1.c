#include <stdio.h>
int main() {
    char first[10];
    char last[10];
    printf("Please enter your first name and last name(use space to split): \n");
    scanf("%s %s", first, last);
    printf("%s,%s\n", first, last);
}