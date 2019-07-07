#include <stdio.h>

int
main()
{
	FILE	*f;
	double	my_gr, gr;
	int	i, run1, hgf;

	f = fopen("gradeComparison.txt", "r");
	run1 = 1;
	i = 0;
	hgf = 0;
	while (fscanf(f, "%lf", &gr) != EOF) {
		i++;
		if (run1) {
			my_gr = gr;
			run1 = 0;
			continue;
		}
		if (gr > my_gr) {
			printf("No %d\n", i);	
			hgf++;
			break;
		}
	}
	if (!hgf)
		printf("Yes\n");
	fclose(f);
	return 0;
}
