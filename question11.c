//����11.+12
//for�� �������� break���� continue���� ���� ���캸��
/*
#include <stdio.h>
int main(void) {
	int i = 1;
	for (putchar('1'); putchar('2'); putchar('3')) {
		if (++i == 5)
			break;
		putchar('4');
		continue;
		putchar('5');
	}
	return 0;
}*/

#include <stdio.h>
int main(void) {
	putchar('1');
	putchar('2');
	int i = 0; 
	while (1) {
		putchar('4');
		putchar('3');
		putchar('2');
		if (++i == 3)
			break;
	}
	return 0;
}