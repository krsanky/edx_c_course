#include <stdio.h>

int main()
{
	double	cement_needed_d, bags_d;
	int	bags, roundup;;
	
	// 120lb cost 45$

	scanf("%lf", &cement_needed_d);

	bags_d = cement_needed_d / 120.0;
	//printf("bags:%lf\n", bags_d);

	bags = (int)bags_d;
	roundup = 0;
	if ((bags_d - (double)bags) != 0)
		roundup = 1;
	//printf("bags:%d ru:%d\n", bags, roundup);
	bags += roundup;
	printf("%d\n", bags * 45);

	return 0;
}

