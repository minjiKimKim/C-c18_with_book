    //����8. ���� ���α׷��� �����ϰ�, �� ���� ū �������� ����ϴ��� �����ض�
/* >������ ���� ����
#include <stdio.h>
int main(void) {
    unsigned long long val = -1;
    printf("���� ū ���� : %llu\n", val);
    return 0;
}*/

//����9. 
//char���� 1)����, 2)���� ���� �� �ٷ� �� ���� �� �ִ�.
//�׷��� char���� ���� �� ���� ū ������ ��� �Ǹ� ��� �ɱ�?
#include <stdio.h>
#include <limits.h>
int main(void) {
    char c1 = 256, c2 = 257;
    printf("c1 : %d, c2 : %d\n", c1, c2);
    printf("CHAR_MAX : %d\n", CHAR_MAX);
    return 0;
}