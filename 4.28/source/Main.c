#include <stdlib.h>
#include <stdio.h>

int main()
{
	int choose;
	double weeklysalary, hoursWork, hourlyRate, sales, commissionRate, pieces, ratePiece;

	printf("Enter Employee (1: Manager, 2: Hourlyworker, 3: Commissionworker,4: Pieceworker, -1 to end): ");
	scanf("%d", &choose);

	while(choose != -1)
	{
		switch (choose)
		{
		case 1:
			printf("Enter Manager fixed weekly salary: ");
			scanf("%lf", &weeklysalary);
			printf("Manager weekly salary: %.2lf\n", weeklysalary);
			break;
		case 2:
			printf("Enter Hourlyworker work hours: ");
			scanf("%lf", &hoursWork);
			printf("Enter Hourlyworker hourly rate: ");
			scanf("%lf", &hourlyRate);
			if (hoursWork > 40)
				weeklysalary = 40 * hourlyRate + (hoursWork - 40) * hourlyRate * 1.5;
			else
				weeklysalary = hoursWork * hourlyRate;
			printf("Hourlyworker weekly salary: %.2lf\n", weeklysalary);
			break;
		case 3:
			printf("Enter Commissionworker sales: ");
			scanf("%lf", &sales);
			commissionRate = 250 + 0.057 * sales;
			printf("Commissionworker weekly salary: %.2lf\n", commissionRate);
			break;
		case 4:
			printf("Enter Pieceworker pieces: ");
			scanf("%lf", &pieces);
			printf("Enter Pieceworker ratePiece: ");
			scanf("%lf", &ratePiece);
			weeklysalary = pieces * ratePiece;
			printf("Pieceworker weekly salary: %.2lf\n", weeklysalary);
			break;
		default:
			printf("Invalid Employee\n");
			break;
		}

		printf("\nEnter Employee (1: Manager, 2: Hourlyworker, 3: Commissionworker,4: Pieceworker, -1 to end): ");
		scanf("%d", &choose);
	}
	return 0;
}