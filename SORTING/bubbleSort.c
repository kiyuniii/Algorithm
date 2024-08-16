#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int *array, int size) {
    for(int i=0; i<size-1; i++) {   //배열의 길이만큼 반복
        for(int j=0; j<size-1; j++) {   //마지막 i개는 이미 정렬되어 있으므로, j는 n-i-1까지만 반복
            if(array[j] > array[j+1])   //현재 요소가 다음 요소보다 크면 교환
                swap(&array[j], &array[j+1]);
        }
    }
}

int main() {
    const int size = 10;  // const : 선언과 동시에 초기화
    int array[size] = {4, 5, 2, 3, 1, 6, 7, 9, 8, 10};
    bubbleSort(array, size);

    for(int i=0; i<size; i++)
        printf("%d ", array[i]);
}