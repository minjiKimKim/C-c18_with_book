/* ����3.���� ��쿡 ���� ��µǴ� ������ �ٸ����� if�� / if - else���� �̿��غ���
   ���� : ������ ���� printf������ 3���� �ִٰ� �غ���
   printf("cat\n");
   printf("dog\n");
   printf("fox\n"); */

//a��
/*#include <stdio.h>
int main(void) {
	int i;
	scanf("%d", &i);
	if (i == 1)
		printf("cat\n");
	else if (i == 2)
		printf("dog\n");
	else
		printf("fox\n");
	return 0;
}*/

//b��
#include <stdio.h>
int main(void) {
	int i;
	scanf("%d", &i);
	if (i == 1)
		printf("dog\n");
	else if (i == 2)
		printf("cat\nfox\n");
	else
		printf("cat\n");
	return 0;
}
