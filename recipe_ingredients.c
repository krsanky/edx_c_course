#include <stdio.h>

int main()
{
	int	i, n;
	int	arr[10];
	for (i=0; i<10; i++) {
		scanf("%d", &n);
		arr[i] = n;
	}
	scanf("%d", &n);
	printf("%d\n", arr[n]);

	return 0;
}


