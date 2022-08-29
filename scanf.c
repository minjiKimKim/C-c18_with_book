//scanf와 입력버퍼 관계 이해하는 예제 2가지

/*#include <stdio.h>
int main(void) {
	int a;
	char b;

	scanf("%d", &a);
	scanf("%c", &b);

	printf("입력받은 a값 : %d, \n 입력받은 b값 : %c\n", a, b);

	printf("b값에는 뭐가 있나 : %d\n", b);

	return 0;
}*/

 //두 번째 예제  <<<<<< 잘 이해가 안되는 거 [고냥 쓸데없는 거 헷갈린거임. scanf창이랑 printf창이랑 입력창
 //을 헷갈린거임]]]]]
#include <stdio.h>
int main(void) {
	int numinput;
	char charinput;

	scanf("%d", &numinput);
	printf("%d\n", numinput); //뭔지는 모르겠지만 getchar() 함수 추가
	getchar();
	scanf("%c", &charinput);
	printf("%c", charinput);
	
	return 0;

}