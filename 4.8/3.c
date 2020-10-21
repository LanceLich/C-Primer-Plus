#include <stdio.h>

int main()
{
    float input;

    scanf("%f", &input);
    printf("input %.1f or %.1e\n", input, input);
    printf("input %+.3f or %.3E\n", input, input);

    return 0;
}