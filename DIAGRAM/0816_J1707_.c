/* 정올 Beginner 달팽이사각형 */
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int snail[n][n];
    int num = 1;
    int m = n;
    int x = 0;
    int y = -1;

    while( m > 0 ){
        for ( int i = 1; i<=m; i++){
            snail[x][++y] = num++;
        }
        m--;
        for ( int i = 1; i<=m; i++){
            snail[++x][y] = num++;
        }
        for ( int i = 1; i<=m; i++){
            snail[x][--y] = num++;
        }
        m --;
        for ( int i = 1; i<=m; i++){
            snail[--x][y] = num++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", snail[i][j]);
        }
        printf("\n");
    }
}
/* https://microelectronics.tistory.com/51 */