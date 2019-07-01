#include <stdio.h>

int
main()
{
	int	guess, target, tries;
	tries = 0;
	guess = -1;
	scanf("%d", &target);
	while (guess != target) {
		scanf("%d", &guess);
		tries++;
		if (target > guess)
			printf("it is more\n");	
		if (target < guess)
			printf("it is less\n");	
	}
	printf("Number of tries needed:\n");
	printf("%d\n", tries);

	return 0;
}

