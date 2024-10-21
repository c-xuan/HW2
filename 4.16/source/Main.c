#include <stdlib.h>
#include <stdio.h>

int main()
{
	printf("(A)        (B)         (C)        (D)\n");
	for (int i = 1; i <= 10; i++)
	{
		printf("%.*s", i, "**********");
		printf("%.*s", 11 - i, "          ");

		printf("%.*s", 11 - i,"**********");
		printf("%.*s", i, "          ");

		printf("%.*s", i, "          ");
		printf("%.*s", 11 - i, "**********");

		printf("%.*s", 11 - i, "          ");
		printf("%.*s\n", i, "**********");
	}
	return 0;
}