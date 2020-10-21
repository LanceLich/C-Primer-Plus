#include <stdio.h>

int main()
{
    char name[20];
    float height;

    printf("please input name and height(in cm):\n");
    scanf("%s %f", name, &height);
    printf("%s, you are %.3f m high.\n", name, height/100);

    return 0;
}