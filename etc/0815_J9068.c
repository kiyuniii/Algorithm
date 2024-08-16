#include <stdio.h>

int main() {
    int array[100];
    int num = 0;
    int count = 0;
    for(int i=0; i<100; i++) {
        scanf("%d", &num);
        if(num == 0)
            break;
        array[i] = num;
        count++;
    }

    for(int i=0; i<count-1; i+=2) {
        printf("%d ", array[i+1]);
    }
}