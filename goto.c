//goto��
//goto���� ���̺� �������� �̵��Ѵ�

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
	printf("����� �Է��ϼ���:");
	scanf("%d", &n);
	if (n < 0) {
		printf("������ �Է��ߴ�. ����� �Է��ϼ���\n");
		goto read;
	}
	goto compute;

end:
	return 0;
}