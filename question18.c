//����18
//����ȯ�� Ȯ���غ���
#include <stdio.h>
int main(void) {
	float x = 1.0, y = 2.0;
	printf("%s%u\n%s%u\n%s%u\n",
		"sizeof(float) =", sizeof(float),
		"sizeof(double)=", sizeof(double),
		"sizeof(x+y)=", sizeof(x + y));
	return 0;
}