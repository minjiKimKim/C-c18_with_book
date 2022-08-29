//문제18
//형변환을 확인해보자
#include <stdio.h>
int main(void) {
	float x = 1.0, y = 2.0;
	printf("%s%u\n%s%u\n%s%u\n",
		"sizeof(float) =", sizeof(float),
		"sizeof(double)=", sizeof(double),
		"sizeof(x+y)=", sizeof(x + y));
	return 0;
}