#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	int principal = 5000, years = 15;

	for (float rate = 10.0; rate <= 12.0; rate += 0.5) 
	{
		printf("Interest Rate: %.1f%%\n", rate);
		printf("Year\tAmount\n");
		for (int i = 1; i <= years; i++)
		{
			float amount = principal * pow(1 + rate / 100, i);
			printf("%d\t$%.2f\n",i, amount);
		}
		printf("\n");
	}
	return 0;
}