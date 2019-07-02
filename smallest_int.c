#include <stdio.h>

int	min(int, int);

int main()
{
	int	min_, nvals, i, run1;
	int	val;
	scanf("%d", &nvals);
	run1 = 1;
	for (i=0; i<nvals; i++) {
		scanf("%d", &val);
		if (run1) {
			min_ = val;		
			run1 = 0;
		} else {
			min_ = min(min_, val);
		}
	}
	printf("%d\n", min_);
	return 0;
}

int
min(int n1, int n2)
{
	if (n1 < n2)
		return n1;
	return n2;
}
