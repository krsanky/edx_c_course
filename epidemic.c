#include <stdio.h>

int
main()
{
	int	p, i, safety, day;
	i = 0;
	day = 0;
	safety = 10000;
	scanf("%d", &p);
	while ((i < p) && (day < safety)) {
		//printf("i:%d\n", i);
		day++;
		if (day == 1) {
			i = 1;
			continue;
		}
		i = i + (i * 2);
		
	}
	//printf("i:%d day:%d\n", i, day);
	printf("%d\n", day);

	return 0;
}

