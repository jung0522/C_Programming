
#include <stdio.h>

struct point {
	int xops;
	int ypos;
};

struct person 
{
	char name[20];
	char phoneNum[20];
	int age;
	int num[2];
	double d1;
};

int main() {
	struct  point pos = { 10,20 };
	struct person man = { "ÀÌ½Â±â", "010-1212-0001", 21 , {1, 3}, 2.3};
	printf("%p %p\n", &pos, &pos.ypos);
	printf("%d %d\n", sizeof(man.name), sizeof(man.num));
	printf("%p %p %p %p %p %p\n", &man, man.name, man.phoneNum, &man.age, man.num, &man.d1);
	return 0;
}
