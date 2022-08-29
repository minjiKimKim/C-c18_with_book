//2개의 실수를 더한 프로그램을 출력해라

#include <stdio.h>
int main(void) {
	float n1, n2;
	printf("실수를 입력하세요\n");

	scanf("%f %f", &n1, &n2);
	printf("%.2f와 %.2f의 합 : %.2f", n1, n2, n1+n2);

	return 0;
}