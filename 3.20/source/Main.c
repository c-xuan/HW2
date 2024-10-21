#include <stdlib.h>
#include <stdio.h>

int main()
{
	int hours;
	float rate, salary, overtime;

	printf("Enter # of hours worked (-1 to end): ");
	scanf("%d", &hours);

	while (hours != -1)
	{
		printf("Enter hourly rate of the worker ($00.00): ");
		scanf("%f", &rate);
		
		if (hours > 40)
		{
			overtime = (hours - 40) * (rate * 1.5);
			salary = 40 * rate + overtime;
		}
		else
			salary = hours * rate;
		printf("Salary is $%.2f\n", salary);
		printf("\nEnter # of hours worked (-1 to end): ");
		scanf("%d", &hours);
	}
	return 0;
}