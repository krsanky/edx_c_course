#include <stdio.h>

/*
Here are the conversion rules to use:
1 meter = 3.2808 feet;
1 gram = 0.002205 pounds;
temperature in degrees Fahrenheit = 32 + 1.8 * temperature in degrees Celsius.
*/

int
main()
{
	int	i, num_conv;
	char	unit;
	double	value;

	scanf("%d", &num_conv);
	printf("num conversions:%d\n", num_conv);

	for (i=0; i<num_conv; i++) {
		scanf("%lf%c", &value, &unit);
		//printf("convert %lf of type %c\n", value, unit);
		printf("asd\n");
	}

	return 0;
}
