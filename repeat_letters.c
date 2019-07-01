#include <stdio.h>


void
bs(char word[])
{
	int		l, i, j, swap;

	l=0;
	while (word[l] != '\0')
		l++;

	for (j=0; j<l-1; j++) {
		for (i=0; i<l-1; i++) {
			if (word[i] > word[i+1]) {
				swap = word[i];
				word[i] = word[i+1];
				word[i+1] = swap;
			}
		}
	}
}

int
main()
{
	int	i, repeats;
	char	word[51];
	char	prev;

	scanf("%s", word);
	bs(word);

	i = 1;
	repeats = 0;
	prev = word[0];
	while (word[i] != '\0') {
		if (prev == word[i])
			repeats++;
		prev = word[i];
		i++;
	}
	printf("%d\n", repeats);

	return 0;
}

