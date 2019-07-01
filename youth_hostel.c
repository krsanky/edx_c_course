#include <stdio.h>

int main()
{
	int hrs_past_noon, cost;

	scanf("%d", &hrs_past_noon);
	
	cost = 10 + hrs_past_noon * 5;
	if (cost > 53)
		cost = 53;

	printf("%d\n", cost);

	return 0;
}


