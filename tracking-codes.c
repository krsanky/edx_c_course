#include <stdio.h>
#include <stdlib.h>

int main()
{
	int	i, ncodes;
	int	codel;
	char	codet; // i d c

	scanf("%d", &ncodes);
	for (i=0; i<ncodes; i++) {
		scanf("%d %c", &codel, &codet);
		switch (codet) {
		case 'i':
			printf("i\n");
			break;
		case 'd':
			printf("d\n");
			break;
		case 'c':
			printf("c\n");
			break;
		default:
			printf("Invalid tracking code type\n");
			exit(1);
		}
	}

	return 0;
}


