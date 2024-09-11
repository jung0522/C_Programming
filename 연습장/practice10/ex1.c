#include <stdio.h>



struct grade {

	char name[20];

	int korean;

	int english;

	int math;

};



int main() {

	struct grade arr[3] = { 0 };

	for (int i = 0; i < 3; i++) {

		printf("%d번째 학생의 이름: ", i + 1);

		scanf("%s", arr[i].name);

		printf("%d번째 학생의 국어 성적: ", i + 1);

		scanf("%d", &arr[i].korean);

		printf("%d번째 학생의 영어 성적: ", i + 1);

		scanf("%d", &arr[i].english);

		printf("%d번째 학생의 수학 성적: ", i + 1);

		scanf("%d", &arr[i].math);

	}

	printf("%3s %3s %3s %3s %3s %3s\n", "이름", "국어", "영어", "수학", "합계", "평균");

	for (int i = 0; i < 3; i++) {

		printf("%3s %3d %3d %3d %3d %3g", arr[i].name, arr[i].korean, arr[i].english,

			arr[i].math, arr[i].korean + arr[i].english + arr[i].math,

			(double)(arr[i].korean + arr[i].english + arr[i].math) / 3); \

			printf("\n");

	}

	return 0;

}