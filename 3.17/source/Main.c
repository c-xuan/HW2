#include <stdio.h>
#include <stdlib.h>

int main()
{
	int account;
	float begin, charge, credit, limit;

	printf("Enter account number (-1 to end): ");
	scanf("%d", &account);

	while (account != -1)
	{
		printf("Enter beginning balance: ");
		scanf("%f", &begin);
		printf("Enter total charges: ");
		scanf("%f", &charge);
		printf("Enter total credits: ");
		scanf("%f", &credit);
		printf("Enter credit limit: ");
		scanf("%f", &limit);

		float new = begin + charge - credit;
		printf("Account: %d\n", account);
		printf("Credit limit: %.2f\n", limit);
		printf("Blance: %.2f\n", new);

		if (limit < new)
			printf("Credit Limit Exceeded.\n");

		printf("\nEnter account number (-1 to end): ");
		scanf("%d", &account);
	}

	return 0;
}