//switch문 예제
#include <stdio.h>
int main(void) {
	int math;

	printf("수학 성적을 입력해달라");
	scanf("%d", &math);
	switch (math / 10) {
	case 10:
		printf("수학 a\n");
		break;
	case 9:
		printf("수학 a\n");
		break;
	case 8:
		printf("수학 b\n");
		break;
	case 7:
		printf("수학 c\n");
		break;
	default:
		printf("수학 f\n");
	}

	return 0;
}