#include <stdio.h>

const int HOUR_MIN = 60;

int main()
{
    int mins;
    int hours;
    int input;

    printf("Enter time in mins:\n");
    scanf("%d", &input);
    while (input > 0) {
        hours = input / HOUR_MIN;
        mins = input % HOUR_MIN;
        printf("time is %d hours %d mins.\n", hours, mins);
        printf("Enter next time in mins:\n");
        scanf("%d", &input);
    }

    return 0;
}