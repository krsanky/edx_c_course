#include <stdio.h>

int
main()
{
	int	i, numg;
	int	grade;
	FILE	*f;

	f = fopen("studentGrades.txt", "r");
	fscanf(f, "%d", &numg);
	printf("%d grades\n", numg); 
	for (i=0; i<numg; i++) {
		fscanf(f, "%d", &grade);
		printf("grade:%d\n", grade);
	}

	fclose(f);
	return 0;
}
