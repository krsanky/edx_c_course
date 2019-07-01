#include <stdio.h>

int main()
{
	int	ht, nl;
	scanf("%d%d", &ht, &nl);

	if ((ht <= 5) && (nl >= 8))
		printf("Tinuviel\n");
	else if ((ht >= 10) && (nl >=10))
		printf("Calaelen\n");
	else if ((ht <= 8) && (nl >= 5))
		printf("Falarion\n");
	else if ((ht >= 12) && (nl <= 7))
		printf("Dorthonion\n");
	else
		printf("Uncertain\n");

	return 0;
}

