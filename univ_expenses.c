#include <stdio.h>

int
main()
{
	int	n, sum;
	n = sum = 0;
	while (n != -1) {
		scanf("%d", &n);
		sum += n;
	}
	sum++;
	printf("%d\n", sum);
	return 0;
}

