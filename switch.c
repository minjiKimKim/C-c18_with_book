//switch�� ����
#include <stdio.h>
int main(void) {
	int math;

	printf("���� ������ �Է��ش޶�");
	scanf("%d", &math);
	switch (math / 10) {
	case 10:
		printf("���� a\n");
		break;
	case 9:
		printf("���� a\n");
		break;
	case 8:
		printf("���� b\n");
		break;
	case 7:
		printf("���� c\n");
		break;
	default:
		printf("���� f\n");
	}

	return 0;
}