#include <stdio.h>
#include <stdlib.h>

int main()
{
	float dollar, salary;

	printf("Enter sales in dollars (-1 to end): ");
	scanf("%f", &dollar);

	while (dollar != -1)
	{
		salary = (dollar * 0.09) + 200;
		printf("Salary is: $%.2f\n", salary);

		printf("\nEnter sales in dollars (-1 to end): ");
		scanf("%f", &dollar);
	}
	return 0;
}