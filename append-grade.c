#include <stdio.h>

int
main()
{
	FILE	*f;
	char	fn[] = "myGrades.txt";

	f = fopen(fn, "r");
	fclose(f);

	return 0;
}
