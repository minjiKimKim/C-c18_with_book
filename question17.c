//아래 오류를 보고 깨달은 점!

#include <stdio.h>
int main(void) {
	int a;
	float b;
	//1. printf 2가지 형태
	//1)printf오류
	//printf("%d %f\n", 2.5, 1024);
	//2)printf 오류 수정
	printf("%d %f\n", 2, 1024.0);
	printf("VS\n");

	//2. scanf 형태
	scanf("%d %f", &a, &b);
	printf("%d %.2f\n", a, b);
	return 0;
}