#include <stdio.h>
#include <string.h>

int main()
{
    char first[20];
    char last[20];

    printf("input first and last name: \n");
    scanf("%s%s", first, last);
    printf("\"%s %s\"\n", first, last);
    printf("\"%20s %20s\"\n", first, last);
    printf("\"%-20s %-20s\"\n", first, last);
    printf("%*s %*s\n", strlen(first) + 3, first, strlen(last) + 3, last);

    return 0;
}