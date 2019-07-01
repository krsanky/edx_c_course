#include <stdio.h>

int main()
{
	int	n1, n2;
	int	r1, r2;

	scanf("%d", &n1);
	scanf("%d", &n2);
	r1 = n1 / n2;
	r2 = n1 % n2;
	printf("%d\n", r1);
	printf("%d\n", r2);
	return 0;
}
