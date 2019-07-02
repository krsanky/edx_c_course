#include <stdio.h>
#include <stdlib.h>

int main()
{
	int	i, ncodes;
	int	codel;
	char	codet;
	int	total_bytes;

	scanf("%d", &ncodes);
	total_bytes = 0;
	for (i=0; i<ncodes; i++) {
		scanf("%d %c", &codel, &codet);
		switch (codet) {
		case 'i':
			total_bytes += 4 * codel;
			break;
		case 'd':
			total_bytes += 8 * codel;
			break;
		case 'c':
			total_bytes += 1 * codel;
			break;
		default:
			printf("Invalid tracking code type\n");
			exit(1);
		}
	}
	printf("%d bytes\n", total_bytes);

	return 0;
}


