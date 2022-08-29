    //문제8. 다음 프로그램을 실행하고, 왜 가장 큰 정수값을 출력하는지 설명해라
/* >이진수 형태 이해
#include <stdio.h>
int main(void) {
    unsigned long long val = -1;
    printf("가장 큰 정수 : %llu\n", val);
    return 0;
}*/

//문제9. 
//char형은 1)문자, 2)작은 정수 를 다룰 때 사용될 수 있다.
//그러나 char형이 담을 수 없이 큰 정수를 담게 되면 어떻게 될까?
#include <stdio.h>
#include <limits.h>
int main(void) {
    char c1 = 256, c2 = 257;
    printf("c1 : %d, c2 : %d\n", c1, c2);
    printf("CHAR_MAX : %d\n", CHAR_MAX);
    return 0;
}