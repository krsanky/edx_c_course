#include <stdio.h>

int
main()
{
	int	amt;
	char	type;
	int	per;
	int	total;
	scanf(" %c %d", &type, &amt);		
	printf("type:%c amt:%d\n", type, amt);		

	switch (type) {
	case 'i':
		per = sizeof(int);
		break;
	case 's':
		per = sizeof(short);
		break;
	case 'c':
		per = sizeof(char);
		break;
	case 'd':
		per = sizeof(double);
		break;
	}
	printf("per:%d\n", per);
	total = amt * per;
	printf("total:%d\n", total);

	return 0;
}

