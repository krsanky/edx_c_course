#include <stdio.h>

int
main()
{
	int	i, nnames;
	char	first[101], last[101];

	scanf("%d", &nnames);

	for (i=0; i<nnames; i++) {
		scanf("%s%s", first, last);
		printf("%s %s\n", last, first);
	}
	
	return 0;
}
