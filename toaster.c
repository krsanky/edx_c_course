#include <stdio.h>

int
main()
{
	int	amt;
	char	type;
	int	per;
	int	total;
	int	tmp;

	scanf(" %c %d", &type, &amt);		

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
	total = amt * per;

	if (total >= 1000000) {
		tmp = total / 1000000;
		printf("%d MB and ", tmp);
		total = total % 1000000;
	}
	if (total >= 1000) {
		tmp = total / 1000;
		printf("%d KB and ", tmp);
		total = total % 1000;
	}
	printf("%d B\n", total);

	return 0;
}

