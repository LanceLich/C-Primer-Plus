#include <stdio.h>
#include <string.h>

int main()
{
    char first[20];
    char last[20];
    
    printf("enter name:\n");
    scanf("%s %s", first, last);
    printf("%s %s\n", first, last);
    printf("%*lu %*lu\n", (int) strlen(first), strlen(first), (int) strlen(last), strlen(last));
    printf("%s %s\n", first, last);
    printf("%-*lu %-*lu\n", (int) strlen(first), strlen(first), (int) strlen(last), strlen(last));

    return 0;
}