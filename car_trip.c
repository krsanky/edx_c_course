#include <stdio.h>

int main()
{
	int	num_pass;
	double	gas_price;
	double	cost;

	scanf("%d%lf", &num_pass, &gas_price);

	cost = 0.0;
	if (num_pass == 0)
		cost = gas_price;
	else 
		cost = (1.0 + gas_price) / (double)(num_pass+1);

	printf("%.2lf\n", cost);

	return 0;
}


