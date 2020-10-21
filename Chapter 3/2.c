#include <stdio.h>
int main(void) {
  int input;
  while (1) {
    printf("please enter a ASCII number: \n");
    scanf("%d", &input);
    printf("input = %d\n", input);
    if (input == 'q') {
      printf("q is entered, quit.\n");
      break;
    }
    printf("the char of ASCII is %c.\n", input);
  }
  return 0;
}
