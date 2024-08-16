#include <stdio.h>

void starTriangle(int n) {
    if(n%2 == 0)
        printf("INPUT ERROR!");
    else {
        for(int i=0; i<n/2+1; i++) {
            for(int j=0; j<i; j++)
                printf(" ");
            for(int j=0; j<1+2*i; j++) 
                printf("*");
            printf("\n");
        }
        for(int i=0; i<n/2; i++) {
            for(int j=0; j<n/2-(i+1); j++)
                printf(" ");
            for(int j=0; j<n-2*(i+1); j++)
                printf("*");
            printf("\n");
        }
    }
}

int main() {
    int height;
    scanf("%d", &height);
    if(height < 0 || height > 100)
        printf("INPUT ERROR!");
    else
        starTriangle(height);
}

/* 
0 1 1
1 3 2
2 5 3
3 7 4

2 5 5 3
1 3 6 2
0 1 7 1

n/2
*/