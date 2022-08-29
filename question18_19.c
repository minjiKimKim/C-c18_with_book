//문제 18
//힌트 : 대부분의 c언어는 논리적 무한대를 지원한다
//however, 0으로 나눌 수 없다는 오류가 뜸
/*
#include <stdio.h>
int main(void) {
	printf("%f\n", 1.0 / 0.0);
	return 0;
}
*/

//문제 19

#include <stdio.h>
int main(void) {
	printf("%f\n", 1.0 / 0.0 + 1.0 / 0.0);
	printf("%f\n", 1.0 / 0.0 - 1.0 / 0.0);

	return 0;
}
