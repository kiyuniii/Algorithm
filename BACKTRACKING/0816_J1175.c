/* 백트래킹 알고리즘, DFS
: 해를 찾는 도중 해가 절대 될 수 없다고 판단되면, 되돌아가서 다시 해를 찾는 기법 */

/* 주사위 n번 던져서 나온 수의 합이 m이 되는 모든 경우의 수 */
#include <stdio.h>

int n, m;
int dice[8];

void rollDice(int depth, int sum) { //depth: 던진 주사위 개수
    /* 주사위를 다 던지고 모든 눈의 합이 맞으면 그 조합을 출력 */
    if(depth == n) {
        if(sum == m) {
            for(int i=0; i<n; i++) 
                printf("%d ", dice[i]);
            printf("\n");
        }
    return;
    }
    
    /*  */
    for(int i=1; i<=6; i++) {
        dice[depth] = i;
        rollDice(depth + 1, sum + i);   //재귀호출
    }
}

int main() {
    scanf("%d %d", &n, &m);

    rollDice(0, 0);
}