/*1. ��/�ҹ��� ��ȯ >1) ��ҹ��� �ƽ�Ű���� ������ ���̸� �̿��� ���
//���� : char���� 1)����, 2)���� ���� �� ������ �� �ִ� �����̴�
#include <stdio.h>
int main(void) {
	char ch = 71;
	int in = 'h'; 
	//****���ڻ���� int���̴�.
	//char������ ����, ���� ������ ������ �����ϴ�.

	ch++;
	in = in - ('a' - 'A');
	printf("ch : %c or %d\n", ch, ch);
	printf("in : %d or %c\n", in, in);
	return 0;
	*/
//2. ��ҹ��� ��ȯ > ctype.h ������� �̿�
#include <stdio.h>
#include <ctype.h>

int main(void){
	char ch = 71;
	int in = 'h';

	ch++;
	in = toupper(in);
	printf("ch : %c or %d\n", ch, ch);
	printf("in : %d or %c\n", in, in);

	return 0;

}