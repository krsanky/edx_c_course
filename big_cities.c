#include <stdio.h>

int main()
{
	int	num_cities, i, count, pop;
	scanf("%d", &num_cities);
	count = 0;
	for (i=0; i<num_cities; i++) {
		scanf("%d", &pop);
		if (pop > 10000)
			count++;
	}
	printf("%d\n", count);
	return 0;
}

