#include <stdio.h>

double cube(double num);
int main() {
    double num;

    scanf("%lf", &num);
    printf("the cube of %lf is %lf.\n", num, cube(num));
}

double cube(double num) {
    return num * num * num;
}