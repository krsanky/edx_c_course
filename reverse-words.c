#include <stdio.h>

int
main()
{
	char	words[68][41];
	int	i;

	for (i=0; i<68; i++) {
		scanf("%s", words[i]);
	}
	for (i=67; i>=0; i--) {
		printf("%s ", words[i]);
	}
	printf("\n");
	return 0;
}
