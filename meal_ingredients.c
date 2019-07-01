#include <stdio.h>

int main()
{
	int	i, n_ingr;
	double	c, cost[10], total;
	double	w, wt[10];

	scanf("%d", &n_ingr);
	for (i=0; i<n_ingr; i++) {
		scanf("%lf", &c);
		cost[i] = c;
	}
	for (i=0; i<n_ingr; i++) {
		scanf("%lf", &w);
		wt[i] = w;
	}

	total = 0.0;
	for (i=0; i<n_ingr; i++) {
		total += cost[i] * wt[i];
	}
	printf("%.6lf\n", total);
	return 0;
}

