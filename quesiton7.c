//문제7.
#include <stdio.h>
int main(void) {
	int n1, n2;
	printf("정수 2개를 입력하세요 :");
	scanf("%d %d", &n1, &n2); //n1 :3, n2:5

	for (int i = n1; i <= n2; i++) {
		int n = i;
		for (int i = 0; i < n; i++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}