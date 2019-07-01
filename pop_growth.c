#include <stdio.h>

int main()
{
	int	cur_pop, est_pop;
	double	gr_rate, new_pop;
	
	scanf("%d", &cur_pop);
	scanf("%lf", &gr_rate);

	new_pop = (gr_rate * .01) * cur_pop;
	//printf("%lf\n", new_pop);
	est_pop = cur_pop + (int)new_pop;
	printf("%d\n", est_pop);
	return 0;
}

