#include <stdio.h>

int
main()
{
	FILE	*f;
	char	fn[] = "myGrades.txt";
	int	gr, check_gr;

	scanf("%d", &check_gr);
	f = fopen(fn, "r");
	while (fscanf(f, "%d", &gr) != EOF) {
		//printf("gr:%d %d\n", gr, check_gr);
	}
	fclose(f);

	if (gr != check_gr) {
		f = fopen(fn, "a");
		fprintf(f, "%d", check_gr);
		fclose(f);
	}
	
	f = fopen(fn, "r");
	while (fscanf(f, "%d", &gr) != EOF) {
		printf("%d ", gr);
	}
	printf("\n");
	fclose(f);

	return 0;
}
