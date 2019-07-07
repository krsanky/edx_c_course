#include <stdio.h>

int
main()
{
	int	i, numg;
	int	total, grade;
	FILE	*f;
	double	avg;

	f = fopen("studentGrades.txt", "r");
	fscanf(f, "%d", &numg);
	total = 0;
	for (i=0; i<numg; i++) {
		fscanf(f, "%d", &grade);
		total += grade;
	}
	avg = (double)total / (double)numg;
	printf("%.2lf\n", avg);
	fclose(f);
	return 0;
}
