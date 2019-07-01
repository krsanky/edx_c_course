#include <stdio.h>

int main()
{
	double	money, bcost;
	int	num_books;

	scanf("%lf", &money);
	scanf("%lf", &bcost);

	num_books = (int)(money / bcost);	
	printf("%d\n", num_books);

	return 0;
}

