/*
#include <stdio.h>

struct point
{
	int xpos;
	int ypos;
};

struct circle {
	double radius;
	struct point* center;
};

int main() {
	struct point cen = { 2, 7 };
	double rad = 5.5;
	struct circle ring = { rad, &cen };

	printf("원의 반지름: %d\n", ring.radius);
	printf("원의 중심 [%d, %d]\n", ring.center->xpos, (*ring.center).ypos);
	printf("원의 넓이 %lf\n", ring.radius*ring.radius*3.14);
			return 0;
}
*/
