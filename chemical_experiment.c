#include <stdio.h>

int
main()
{
	int	min, max, t;
	scanf("%d%d", &min, &max);
	t = 0;
	while (t != -999) {
		scanf("%d", &t);
		if ((t < min) || (t > max)) {
			printf("Alert!\n");
			break;
		}
		printf("Nothing to report\n");
	}

	return 0;
}

