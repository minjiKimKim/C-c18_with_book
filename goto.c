//goto문
//goto문을 레이블 문장으로 이동한다

#include <stdio.h>
int main(void) {
	unsigned long long f;
	int n, i;

	goto read;

compute:
	for (f = i = 1; i <= n; i++)
		f *= i;
	printf("%d! = %llu\n", n, f);
	goto end;

read:
	printf("계승을 입력하세요:");
	scanf("%d", &n);
	if (n < 0) {
		printf("음수를 입력했다. 양수를 입력하세요\n");
		goto read;
	}
	goto compute;

end:
	return 0;
}