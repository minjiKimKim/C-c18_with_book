//continue문 예제
//1. continue문 뒤에 있는 반복문 마지막 문장 직전으로 제어가 넘어온다
//2. 더이상 조건을 만족하지 않아서 처음부터 다시 반복을 하고 싶을 때

#include <stdio.h>
int main(void) {
	unsigned long long f;
	int n, i;
	while (1) {
		printf("계승을 구할 수를 입력하세요 :");
		scanf("%d", &n);
		if (n < 0) {
			printf("음수를 입력했어요. 양수를 입력하세요\n");
			continue;
		}

		for (f = i = 1; i <= n; i++)
			f *= i;
		printf("%d! = %llu\n", n, f);
		break;

		//continue문 만나면 제어가 여기로 넘어옴
	}

	return 0;
}