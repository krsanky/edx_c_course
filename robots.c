#include <stdio.h>

int main()
{
	int	i;
	int	num_robots;
	int	engine_power, resistance, weight, height;
	int	power, total_power;

	scanf("%d", &num_robots);
	total_power = 0;
	for (i=0; i<num_robots; i++) {
		scanf("%d%d%d%d", &height, &weight, &engine_power, &resistance);
		power = (engine_power + resistance) * (weight - height);
		total_power += power;
		//printf("%d\n", power);
	}
	printf("%d\n", total_power);

	return 0;
}


