//scanf�� �Է¹��� ���� �����ϴ� ���� 2����

/*#include <stdio.h>
int main(void) {
	int a;
	char b;

	scanf("%d", &a);
	scanf("%c", &b);

	printf("�Է¹��� a�� : %d, \n �Է¹��� b�� : %c\n", a, b);

	printf("b������ ���� �ֳ� : %d\n", b);

	return 0;
}*/

 //�� ��° ����  <<<<<< �� ���ذ� �ȵǴ� �� [��� �������� �� �򰥸�����. scanfâ�̶� printfâ�̶� �Է�â
 //�� �򰥸�����]]]]]
#include <stdio.h>
int main(void) {
	int numinput;
	char charinput;

	scanf("%d", &numinput);
	printf("%d\n", numinput); //������ �𸣰����� getchar() �Լ� �߰�
	getchar();
	scanf("%c", &charinput);
	printf("%c", charinput);
	
	return 0;

}