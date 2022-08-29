//4_2. while문 형태 익히기
//while문
//언제, 형태, 순서도, while문 주의사항 3개
//while문을 활용해서, 100보다 큰 피보나치수열 중 가장 작은 피보나치 수 구하는 예제
#include <stdio.h>
int main(void) {
	int n1 = 1, n2 = 2, n3;
	n3 = n1 + n2;

	while (n3 <= 100) {
		n1 = n2;
		n2 = n3;
		n3 = n1 + n2;
	}
	printf("100보다 큰 피보나치수열 중 가장 작은 수 : %d\n", n3);
	return 0;
}