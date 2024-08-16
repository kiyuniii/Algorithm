#include <stdio.h>

int main() {
    int array[3][5] = {{5, 8, 10, 6, 4}, {11, 20, 1, 13, 2}, {7, 9, 14, 22, 3}};

    for(int i=0; i<3; i++) {
        for(int j=0; j<5; j++)
            /* 뒤로 3칸 공백(_ _ _), 앞으로 2칸(%2d) */
            printf("%2d   ", array[i][j]);
        printf("\n");
    }
}