// 정수와 실수를 입력하여, 두 수의 곱을 출력하는 프로그램 작성

#include <stdio.h>

int main(void) {
	printf("정수와 실수를 입력하세요 :");

	int n1;
	float f1;

	scanf("%d %f", &n1, &f1);

	printf("%d * %.2f = %.2f\n", n1, f1, n1 * f1);

}