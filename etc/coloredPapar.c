/* JUNGOL Beginner #1671 */
#include <stdio.h>

int main() {
    int num;
    int x, y;
    int array[101][101]={0};

    scanf("%d", &num);
    for(int i=0; i<num; i++) {
        scanf("%d%d", &x, &y);
        for(int j=0; j<10; j++) {
            for(int k=0; k<10; k++) {
                array[y+j][x+k] = 1;
            }
        }
    }

    int count = 0;
    for(int i=1; i<101; i++) {
        for(int j=1; j<101; j++) {
            if(array[j][i]!=array[j-1][i]) count++;
            if(array[j][i]!= array[j][i-1]) count++;
        }
    }

    printf("%d", count);
}
