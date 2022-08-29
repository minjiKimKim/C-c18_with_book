//4.7
//for문에서 선언한 i는 "for"문에서만 사용가능한 변수로,
//for문 수행이 다 끝나면 사라진다

#include <stdio.h>
int main(void) {
	int i = 1, sum = 0, n;
	printf("정수를 입력하세요:");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
		sum += i;

	printf("1부터 %d까지의 합: %d\n", i - 1, sum);
	return 0;
}