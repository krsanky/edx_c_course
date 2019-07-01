#include <stdio.h>

int main() 
{
	int	n1, n2, sum;

	scanf("%d%d", &n1, &n2);

	sum = n1 + n2;
	if (sum >= 10) {
		printf("Special tax\n36\n");
	} else {
		printf("Regular tax\n%d\n", 2*sum);
	}
	return 0;	
}
