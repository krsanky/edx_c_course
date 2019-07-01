#include <stdio.h>

int main()
{
	int X,Y,Z;

	X = 25-23;
	Y = 60 * 24 * X;
	Z = 60 * Y;
	printf("Dear Procrastinator,\n");
	printf("You still have to wait for %d days (%d minutes or %d seconds)", X, Y, Z);
	printf(" before you can procrastinate!\n");

	return 0;
}


