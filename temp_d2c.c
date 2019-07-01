#include <stdio.h>

int main()
{
//Temperature F = Temperature C * 9.0 / 5.0 + 32.0
	double	f;
	int	c;
	scanf("%d", &c);
	f = (double)c * 9.0 / 5.0 + 32.0;
	printf("%.1lf\n", f);	
	return 0;
}
