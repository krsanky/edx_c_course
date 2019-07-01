#include <stdio.h>

int main()
{
	int i, m;

	scanf("%d", &m);
	for (i=0; i<11; i++)
		printf("%dx%d = %d\n", i, m, i*m);

	return 0;
}


