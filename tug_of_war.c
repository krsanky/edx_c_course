#include <stdio.h>

int main()
{
	int		i, num_players, w, sum1, sum2;
	int		alt;

	scanf("%d", &num_players);

	alt = sum1 = sum2 = 0;
	for (i=0; i<(2*num_players); i++) {
		scanf("%d", &w);
		if (alt == 0) {
			sum1 += w;
			alt = 1;
		} else {
			sum2 += w;
			alt = 0;	
		}
	}	

	alt = 2;
	if (sum1 > sum2)
		alt = 1;
	printf("Team %d has an advantage\n", alt);
	printf("Total weight for team 1: %d\n", sum1);	
	printf("Total weight for team 2: %d\n", sum2);	
	return 0;
}
