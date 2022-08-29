//두 정수를 입력바아, 그 곱을 출력하는 프로그램 작성

#include <stdio.h>

int main() {
	printf("두 정수 값을 입력하세요 :");

	int n1, n2;
	scanf("%d %d", &n1, &n2);
	printf("%d * %d = %d", n1, n2, n1 * n2);
	
	return 0;
}