//문제20
//c언어에서 실수형은 범위를 벗어나는 무한대 개념을 수학에서와 같이 사용하기도 한다.
#include <stdio.h>
int main(void){
	float one = 1.0, zero = 0.0, r1, r2;

	r1 = one / zero;
	r2 = -one / zero;

	printf("무한대 * 무한대 = %f\n", r1 * r1);
	printf("무한대 * -무한대 = %f\n", r1 * r2);
	printf("무한대 * 0 = %f\n", r1 * zero);
	printf("-무한대 * 0 = %f\n", r2 * zero);
	printf("1/무한대 = %f\n", one / r1);
	printf("1/-무한대 = %f\n", one / r2);
	printf("무한대 / 무한대 = %f\n", r1 / r1);
	printf("무한대/-무한대 = %f\n", r1 / r2);
	printf("무한대 - 무한대 =%f\n", r1 - r1);
	printf("무한대 + 1 = %f\n", r1 + one);

	return 0;
	}