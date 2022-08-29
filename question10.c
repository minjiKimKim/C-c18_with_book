//문제10
//일반적 산술 변환
#include <stdio.h>
#include <limits.h>
int main(void) {
	unsigned char a = 100, b = 200, d;
	signed char c = -50;
	d = a + b + c; //int형이 unsigned char형으로[250]
	printf("d = %d\n", d);
	printf("UCHAR_MAX : %d\n", UCHAR_MAX);
	return 0;

}