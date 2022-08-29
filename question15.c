//거듭제곱 프로그램

#include <stdio.h>
int main(void) {
	int num;
	printf("정수를 입력하세요.\n");
	scanf("%d", &num);

	printf("%d의 거듭제곱 : %d", num, num * num);

	return 0;
}