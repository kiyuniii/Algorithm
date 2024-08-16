/* JUNGOL LC_C언어 배열2 */
#include <stdio.h>

int main() {
    int array[10000];
    int num;
    int size = 0;

    while(1) {
        scanf("%d", &num);
        if(num < 1 || num > 10) break;
        array[size] = num;
        size++;
    }

/*     for(int i=0; i<size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
 */
    for(int i=1; i<=10; i++) {
        int count = 0;
        for(int j=0; j<size; j++) {
            if(array[j] == i)
                count++;
        }
        if(count != 0)
            printf("%d : %d개\n", i, count);
    }
}