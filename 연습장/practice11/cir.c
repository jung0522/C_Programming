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

	printf("���� ������: %d\n", ring.radius);
	printf("���� �߽� [%d, %d]\n", ring.center->xpos, (*ring.center).ypos);
	printf("���� ���� %lf\n", ring.radius*ring.radius*3.14);
			return 0;
}
*/
