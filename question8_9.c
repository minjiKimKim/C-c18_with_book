/*
문제 8,9번 같은 형식
: 각각의 부동형상수[10진상수의 지수형태, 16진상수 형태]의 실수 값은 무엇일까?
*/

#include <stdio.h>
int main(void) {
	printf("12e2 : %f\n", 12e2);
	printf("0x14p-3 : %f\n", 0x14p-3);

	return 0;

}