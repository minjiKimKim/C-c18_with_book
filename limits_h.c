/*
<limits.h> 헤더파일 예제
*/
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
	//굳이 변수 선언할 필요없음
	//int a;
	//float b;

	printf("int max : %d, int min : %d\n", INT_MAX, INT_MIN);
	printf("float max : %f, float min : %f\n", FLT_MAX, FLT_MIN);
}