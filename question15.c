//�Ʒ��� 1��ó�� �ۼ��ص� �����ݷ����� ��ū�� �� �����⸸ �ϸ� ������ �ȴ�. 
//�׷���, �������� ���� �ʾ� 2��ó�� �ٲٴ� ���� �����ϴ�.
/*1��
#include <stdio.h>
int main(void) {
	int a; int
		b; float
		c; a = 0; c
		= 3.14; printf
		("Input a(integer value) : "
		); scanf("%d",
			&a); printf("Radius : %d\n", a); b = 2
		* a; printf("Diameter : %d\n", b); 
	printf("Circumstance : %.2f\n", b * 
		c); return 0;
}
*/

//2��
#include <stdio.h>
int main(void) {
	int a=0, b;
	float c = 3.14;
	printf("input a(integer value) :");
	scanf("%d", &a);
	printf("Radius : %d\n", a);
	b = 2 * a;
	printf("Diameter : %d\n", b);
	printf("Circumstance : %.2f\n", b * c);
	return 0;
}