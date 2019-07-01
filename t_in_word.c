#include <stdio.h>

int
main()
{
	char	word[51];
	int	i, l, mid, has_t;

	scanf("%s", word);

	l = 0;
	while (word[l] != '\0')
		l++;

	mid = l / 2;	
	has_t = 0;
	for (i=0; i<l; i++) {
		if ((word[i] == 'T') || (word[i] == 't')) {
			if (i > mid)
				printf("2\n");
			else
				printf("1\n");
			has_t = 1;
			break;
		}
	}
	if (!has_t)
		printf("-1\n");

	return 0;
}

