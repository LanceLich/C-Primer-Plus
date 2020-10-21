#include <stdio.h>

int main()
{
    float speed;
    float size;
    float time;

    printf("input download speed(Mb/s) and file size(MB):\n");
    scanf("%f %f", &speed, &size);
    time = size * 8 / speed;
    printf("At %.2f Mb/s, a file of %.2f MB downloads in %.2f seconds.\n", speed, size, time);
}