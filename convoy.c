#include <stdio.h>

int main()
{
	int	i, ncars;	
	double	avg, total, wt, wts[50];

	scanf("%d", &ncars);
	total = 0.0;
	for (i=0; i<ncars; i++) {
		scanf("%lf", &wt);
		total += wt;
		wts[i] = wt;
	}
	avg = total / (double)ncars;
	printf("ncars:%d total-wt:%lf avg:%lf\n", ncars, total, avg);
	return 0;
}

