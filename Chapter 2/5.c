#include <stdio.h>

void printSmile(void);

int main(void) {
	for (int i = 3; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			printSmile();
		}
		printf("\n");
	}
	return 0;
}
void printSmile(void) {
	printf("Smile!");
}

