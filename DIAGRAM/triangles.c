#include <stdio.h>

void triangleLB(int n);
void triangleLU(int n);
void triangleRU(int n);
void triangleRB(int n);

void triangleLB(int n) {
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void triangleLU(int n) {
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n-i+1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void triangleRU(int n) {
    for(int i=1; i<=n; i++) {
        for(int j=1; j<i; j++) {
            printf(" ");
        }
        for(int j=1; j<=n-i+1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void triangleRB(int n) {
    for(int i=1; i<=n; i++) {
        for(int j=1; j<n-i+1; j++) {
            printf(" ");
        }
        for(int j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int height;
    printf("height>> ");
    scanf("%d", &height);

    triangleLB(height);
    printf("--------------------------\n");
    triangleLU(height);
    printf("--------------------------\n");
    triangleRU(height);
    printf("--------------------------\n");
    triangleRB(height);
    printf("--------------------------\n");
}