#include <stdio.h>

void pascalType1(int height);
void pascalType2(int height);
void pascalType3    (int height);

int main() {
    int height, type;
    scanf("%d%d", &height, &type);

    switch(type) {
        case 1: pascalType1(height);   break;
        case 2: pascalType2(height);   break;   
        case 3: pascalType3(height);   break;
        default: return 0;
    }
}

void pascalType1(int height) {
    int i, j;
    int array[100][100];
     
    for(i=0; i<height; i++) {
        for(j=0; j<i+1; j++) {
            if(i==j || i==0 || j==0)
                array[i][j] = 1;
            else 
                array[i][j] = array[i-1][j-1] + array[i-1][j];
        }
    }

    for(i=0; i<height; i++) {
        for(j=0; j<i+1; j++) {
            printf("% 2d", array[i][j]);
        }
        printf("\n");
    }
}

void pascalType2(int height) {
        int i, j;
    int array[50][50];
     
    for(i=0; i<height; i++) {
        for(j=0; j<i+1; j++) {
            if(i==j || i==0 || j==0)
                array[i][j] = 1; 
            else 
                array[i][j] = array[i-1][j-1] + array[i-1][j];
        }
    }
    for (int i = 0; i<height; i++){
    for ( int j = 0; j < i; j++) printf(" ");
    for ( int j = 0; j < height; j++) {
        if(array[height-i-1][j] != 0) printf("%d ",array[height-i-1][j]);
    }
    printf("\n");
}
}

void pascalType3(int height) {
    int i, j;
    int array[100][100] = {0};

    for(i = 0; i < height; i++) {
        for(j = 0; j <= i; j++) {
            if(i == j || i == height - 1) 
                array[i][j] = 1;
             else 
                array[i][j] = array[i-1][j-1] + array[i-1][j];
        }
    }
    //height = 6, j = 0
    //[4][4] = [5][5] + [4][5]
    // 결과 출력
    for (int i = height-1; i >=0; i--){
        for (int j = height-1; j>=0 ; j--){
            if (array[j][i] != 0) printf("%d ",array[j][i]);
        }
        printf("\n");
    }
}

/* 
height = 5
00 
10 11
20 21 22 
30 31 32 33   
40 41 42 43 44

1
4 1
6 3 1
4 3 2 1
1 1 1 1 1

height = 5
height-(i+j+2)
 */