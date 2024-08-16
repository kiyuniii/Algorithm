/* 세 수 중 두 번째로 큰 수 */
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a; 
    *a = *b;
    *b = temp;
}

void selectionSort(int *array, int size) {
    for(int i=0; i<size; i++) {
        int index = i;
        for(int j=i+1; j<size; j++) {
            if(array[j] < array[index])
                index = j;
        }
        swap(&array[i], &array[index]);
    }
}

int main() {
    int array[3];
    for(int i=0; i<3; i++) 
        scanf("%d", &array[i]);
    selectionSort(array, 3);
    printf("%d", array[1]);
}