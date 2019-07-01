#include <stdio.h>

int main()
{
	int	age, wt, cost;
	scanf("%d%d", &age, &wt);

	if (age == 60) 
		cost = 0;
	else if (age < 10)
		cost = 5;
	else {
		cost = 30;
		if (wt > 20) {
			cost += 10;
		}
	}
	printf("%d\n", cost);
	
	return 0;
}

