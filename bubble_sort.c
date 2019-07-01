#include <stdio.h>

void
print_arr(int arr[], int l)
{
	int	i;
	for (i=0; i<l; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int
main()
{
	int 		list      [] = {
		759, 14, 2, 900, 106, 77, -10, 8, -3, 5
	};
	int 		n = 10;
	int		i, j, swap;

	print_arr(list, n);

	for (j=0; j<n-1; j++) {
		for (i=0; i<n-1; i++) {
			if (list[i] > list[i+1]) {
				swap = list[i];
				list[i] = list[i+1];
				list[i+1] = swap;
			}
		}
	}

	print_arr(list, n);

	return 0;
}
