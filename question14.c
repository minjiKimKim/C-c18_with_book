/*
1. 두개의 문자열 상수는 구두자 없이 붙어있으면 하나의 문자열 상수로 인식한다.
2. printf함수의 출력형태 관찰!
*/
#include <stdio.h>
int main(void) {
	printf("%s"  "%d, %d\n",  "%d"  "%d", 1, 2, 3, 4, 5);
	return 0;
}