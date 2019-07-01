#include <stdio.h>

int main()
{
	int	i, grade, num_grades, total;	
	double	avg;

	scanf("%d", &num_grades);
	total = 0;
	for (i=0; i<num_grades; i++) {
		scanf("%d", &grade);
		total += grade;
	}	
	avg = (double)total / (double)num_grades;
	printf("%.2lf\n", avg);
	return 0;
}

