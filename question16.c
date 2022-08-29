//문제16.
//컴퓨터가 다룰 수 있는 실수는 매우 제한적이라, 실수는 부정확하게 자료형에 담긴다.
#include <stdio.h>
int main(void) {
	double x = 123.45123451234512345;
	double y = 123.45123451234512300;

	printf("%.17f %.17f\n", x, y);
	return 0;
}