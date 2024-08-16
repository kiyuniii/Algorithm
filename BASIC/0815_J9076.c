/* 피보나치 수열 문제 */
#include <stdio.h>

int pibbonacci(int n) {
    if(n == 0) return 0;
    else if(n == 1) return 1;
    else
    /* 그냥 이 코드 그대로 외우자 */
        return pibbonacci(n-1) + pibbonacci(n-2);
}

int main() {
    for(int i=0; i<4; i++) {
        printf("피보나치 수열 %d0항 : %d\n", i+1, pibbonacci((i+1)*10));
    }
}

/* 
https://jungol.co.kr/problem/9076?cursor=eyJwcm9ibGVtc2V0IjoyLCJmaWVsZCI6OSwiaWR4Ijo0fQ==

[출력]
피보나치 수열 10항 : 55
피보나치 수열 20항 : 6765
피보나치 수열 30항 : 832040
피보나치 수열 40항 : 102334155
 */