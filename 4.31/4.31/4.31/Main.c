#include <stdlib.h>
#include <stdio.h>

int main()
{
	int i, j, k;
	for (i = 0; i < 5; i++) {

		for (k = 0; k < 5 - i - 1; k++) {
			printf(" ");
		}
		for (j = 0; j < (i * 2) + 1;j++) {
			printf("*");
		}
		printf("\n");
	}
	for (i = 4; i > 0; i--) {

		for (k = 0; k < 5 - i; k++) {
			printf(" ");
		}
		for (j = 0; j < (i * 2) - 1;j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}