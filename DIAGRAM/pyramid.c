#include <stdio.h>

void pyramid(int n);

void pyramid(int n) {
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=(n-i); j++)
            printf(" ");
        for(int j=1; j<=(2*i-1); j++)
            printf("*");
        for(int j=1; j<=(n-i); j++)
            printf(" ");
        printf("\n");            
    }   
}

int main() {
    int height;
    printf("height>>");
    scanf("%d", &height);

    pyramid(height);
}





/* n = 4;
star=1, blank=6
star=3, blank=4
star=5, blank=2
star=7, blank=0 */