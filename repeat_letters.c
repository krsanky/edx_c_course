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
	int	l, i, repeats;
	char	word[51];

	scanf("%s", word);
	
	l=0;
	while (word[l] != '\0')
		l++;

	bs(word);

	repeats = 0;
	for (i=0; i<l-1; i++) {
		if (word[i] == word[i+1]) {
			i++;
			repeats++;
			while (word[i] == word[i+1]) 
				i++;
		}

	}
	printf("%d\n", repeats);
	return 0;
}

