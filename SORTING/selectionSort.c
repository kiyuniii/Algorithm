#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
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
    const int size = 10;  // const : 선언과 동시에 초기화
    int array[size] = {4, 5, 2, 3, 1, 6, 7, 9, 8, 10};
    selectionSort(array, size);

    for(int i=0; i<size; i++)
        printf("%d ", array[i]);
}