#include <stdio.h>

int
main()
{
	int	i, n;
	char	buf[256];
	scanf("%d%s", &n, buf);
	for (i=0; i<n; i++)
		printf("%s\n", buf);	
	return 0;
}

