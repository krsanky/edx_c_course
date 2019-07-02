#include <stdio.h>

int	sumOfDigits(int);

int main()
{
	int	num;

	scanf("%d", &num);

	printf("%d\n", sumOfDigits(num));
	return 0;
}

int
sumOfDigits(int n)
{
	if (n < 10) {
		return n;
	} else {
		return (n%10) + sumOfDigits(n/10);
	}
}

