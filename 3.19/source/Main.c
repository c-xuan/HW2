#include <stdlib.h>
#include <stdio.h>

int main()
{
	float principal, rate, days, charge;

	printf("Enter loan principal (-1 to end): ");
	scanf("%f", &principal);

	while (principal != -1)
	{
		printf("Enter interest rate: ");
		scanf("%f", &rate);
		printf("Enter term of the loan in days: ");
		scanf("%f", &days);

		charge = principal * rate * (days / 365);

		printf("The interest charge is $%.2f\n", charge);

		printf("\nEnter loan principal (-1 to end): ");
		scanf("%f", &principal);
	}
	return 0;
}