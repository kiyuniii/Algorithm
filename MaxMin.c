#include <stdio.h>

int getMax(int a, int b, int c) {
    int max = a;
    if(b > max) max = b;
    /* else if를 쓰면 위의 조건이 참일 때 아래 조건 건너 뜀
    따라서 이럴 땐 사용하면 안 됨 */
    if(c > max) max = c;
    return max;
}

