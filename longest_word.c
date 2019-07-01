#include <stdio.h>

int
main()
{
	int	i, l, nwords, longest;
	char	word[101];

	scanf("%d", &nwords);
	longest = 0;
	for (i=0; i<nwords; i++) {
		scanf("%s", word);
		l = 0;
		while (word[l] != '\0')
			l++;
		if (l > longest)
			longest = l;
	}
	printf("%d\n", longest);
		
	return 0;
}

