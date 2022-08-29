//문제1. sizeof를 이용해 자료형의 크기를 알아내라
#include <stdio.h>
int main(void) {
	printf("%d\n", sizeof(_Bool));
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(unsigned));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	printf("%d\n", sizeof(long double));
	return 0;
}

