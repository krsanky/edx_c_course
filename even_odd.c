#include <stdio.h>

int
main()
{
	char	name[51];
	int	i;
	scanf("%s", name);
	i = 0;
	while (name[i] != '\0') 
		i++;
		
	if (i % 2)
		printf("2\n");
	else
		printf("1\n");
	return 0;
}
