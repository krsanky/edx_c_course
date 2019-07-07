#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main(int argc, char **argv)
{
	int	nump;
	double	price;
	
	if (argc != 3) {
		printf("Invalid input.\n");
		exit(1);
	}
	nump = atoi(argv[1]);
	price = atof(argv[2]);
	/*scanf("%d%lf", &nump, &price);*/

	printf("%d plants for %.2lf dollars each cost %.2lf dollars.\n", nump, price, nump * price);
	return 0;
}
