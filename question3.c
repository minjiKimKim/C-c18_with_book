/* 문제3.여러 경우에 따라 출력되는 문장이 다르도록 if문 / if - else문을 이용해보자
   전제 : 다음과 같은 printf문장이 3개가 있다고 해보자
   printf("cat\n");
   printf("dog\n");
   printf("fox\n"); */

//a번
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

//b번
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
