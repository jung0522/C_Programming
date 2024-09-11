/*
#include <stdio.h>
#include <math.h>

typedef struct point {
	int x;
	int y;
} Point;

int main(void)
{
	Point p1 = {10, 10}; // (x1, y1)
	Point p2 = {40, 50}; // (x2, y2)

    // 두 점 사이의 거리는 x1- x2의 제곱 + y1 - y2의 제곱 값을 제곱근을 해주면 되므로 <math.h> 파일을 불러와 sqrt 함수를 사용해 구해준다.
	printf("%f\n", sqrt( (double)( (p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y) ) ) );
	return 0;
}
*/
