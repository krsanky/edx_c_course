#include <stdio.h>

void
m2feet(double m)
{
	printf("%.6lf ft\n", m * 3.2808);
}

void
g2lbs(double g)
{
	printf("%.6lf lbs\n", g * 0.002205);
}

void
cel2far(double c)
{
	printf("%.6lf f\n", 32 + 1.8 * c);
}

int
main()
{
	int	i, nconv;
	double	val;
	char	unit;

	scanf("%d", &nconv);

	for (i=0; i<nconv; i++) {
		scanf("%lf %c", &val, &unit);
		//printf("%lf %c\n", val, unit);
		switch (unit) {
		case 'm':
			m2feet(val);
			break;
		case 'g':
			g2lbs(val);
			break;
		case 'c':
			cel2far(val);
			break;
		default:
			printf("not handled\n");
		}
			
	}
	
	return 0;
}



