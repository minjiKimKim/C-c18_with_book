//아래의 1번처럼 작성해도 세미콜론으로 토큰을 잘 나누기만 하면 실행은 된다. 
//그러나, 가독성이 좋지 않아 2번처럼 바꾸는 것이 현명하다.
/*1번
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

//2번
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