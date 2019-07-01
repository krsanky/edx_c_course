#include <stdio.h>

/*
Examples
Input

#

Output

++++#++++
+++###+++
++#####++
+#######+
#########

Input

o

Output

++++o++++
+++ooo+++
++ooooo++
+ooooooo+
ooooooooo
*/

int main()
{
	char	c;
	scanf("%c", &c);
	printf("++++%c++++\n", c);
	printf("+++%c%c%c+++\n", c, c, c);
	printf("++%c%c%c%c%c++\n", c, c, c, c, c);
	printf("+%c%c%c%c%c%c%c+\n", c, c, c, c, c, c, c);
	printf("%c%c%c%c%c%c%c%c%c\n", c, c, c, c, c, c, c, c, c);
	return 0;
}

