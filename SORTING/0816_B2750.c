#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSort(int *arr, int size) {
    for(int i=0; i<size; i++) {
        int index = i;
        for(int j=i+1; j<size; j++) {
            if(arr[j] < arr[index])
                index = j;
        }
        swap(&arr[i], &arr[index]);
    }
}

int main() {
    int num;
    scanf("%d", &num);

    for(int i=0; i<num; i++) {
        int array[10] = {0};
        for(int j=0; j<10; j++) 
            scanf("%d", &array[j]);
        selectionSort(array, 10);
        printf("%d\n", array[7]);
    }
}