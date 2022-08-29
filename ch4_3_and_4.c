//for문을 사용해서
//1부터 n까지의 합을 구해라
//1부터 n까지의 합 중 짝수만을 골라서 더해라
/*#include <stdio.h>
int main(void) {
	int i = 1, sum = 0, n = 10;

	for (i = 1; i <= n; i++) {
		sum += i;
	}

	printf("합은 : %d\n", sum);
	return 0;
}*/

#include <stdio.h>
int main(void) {
	int i = 1, sum = 0, n = 10;
	for (i = 1; i <= n; i += 2) {
		sum += i;
	}
	printf("합은 : %d\n", sum);
	return 0;
}