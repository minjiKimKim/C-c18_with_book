//����11
//���Ŀ��� ���� "��"�� �ִ�.
//������ �� ���� >1)�ڵ�����ȯ 2)��������ȯ-ĳ��Ʈ������
//������ ���� �˰� ���� ���� sizeof�����ڸ� ����
#include <stdio.h>
int main(void) {
	char c = 'A';

	printf("sizeof(c) = %u\n", sizeof(c));//char��
	printf("sizeof('A') = %u\n", sizeof('A'));//**���ڻ�� ��ü�� int���̴�
	printf("sizeof(c+c) = %u\n", sizeof(c + c));//int��[�����°�]
	printf("sizeof(c='A') = %u\n", sizeof(c = 'A'));//char��

	return 0;

}