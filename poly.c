#include <stdio.h>
#include <stdlib.h>

struct point {
	int 		x;
	int 		y;
};

void 		printPoint(struct point);
void 		printPoly(struct point *, int);
void 		initializePoly(struct point *, int);

int 
main(void)
{
	int 		N;
	struct point	*pts;
	scanf("%d", &N);
	pts = (struct point *)malloc(sizeof(struct point) * N);	
	initializePoly(pts, N);
	printPoly(pts, N);

}

void 
printPoint(struct point pt)
{
	printf("(%d, %d)\n", pt.x, pt.y);
}

void 
printPoly(struct point * ptr, int N)
{
	int 		i;
	for (i = 0; i < N; i++) {
		printPoint(ptr[i]);
	}
}

//Write your initializePoly() function 	here
void
initializePoly(struct point * pts, int N)
{
	int	i;
	for (i=0; i<N; i++) {
		pts[i].x = -i;
		pts[i].y = i*i;
	}


}
