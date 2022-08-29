//문제17.
//printf에서 지정된 자리수보다 더 긴 실수를 입력하면 출력할 때,
//반올림을 하는지, 버리는지 알아보기 위한 예제
#include <stdio.h>
int main(void) {
	double x = 5.55555555555;
	printf("x = %.5f\n", x);
	return 0;
}