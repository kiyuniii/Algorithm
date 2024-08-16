/* 정올 Beginner 달팽이사각형 */
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int snail[100][100] = {0}; // 최대 100x100 크기의 배열
    int num = 1;               // 배열에 채울 숫자
    int x = 0, y = 0;          // 현재 위치
    int dx = 0, dy = 1;        // 방향 (우, 하, 좌, 상)

    for (int i = 0; i < n * n; i++) {
        snail[x][y] = num++;  // 현재 위치에 숫자 채우기

        // 다음 위치 계산
        int nx = x + dx;
        int ny = y + dy;

        // 다음 위치가 배열의 범위를 벗어나거나 이미 숫자가 채워져 있는 경우 방향 전환
        if (nx < 0 || nx >= n || ny < 0 || ny >= n || snail[nx][ny] != 0) {
            // 방향 전환 (우 -> 하 -> 좌 -> 상 -> 우 ...)
            int temp = dx;
            dx = dy;
            dy = -temp;
        }

        // 다음 위치로 이동
        x += dx;
        y += dy;
    }

    // 결과 출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", snail[i][j]);
        }
        printf("\n");
    }

    return 0;
}