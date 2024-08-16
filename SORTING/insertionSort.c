#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void insertionSort(int *array, int size) {
    int i, j, key;
    for(i=0; i<size; i++) {
        key = array[i];
        j = i - 1;
        
        /* 정렬된 부분에서 key가 들어갈 위치를 찾음 */
        while(j >= 0 && array[j] > key) {
            array[j+1] = array[j];  //요소를 한 칸씩 뒤로 이동
            j = j - 1;
        }
        array[j+1] = key;   //key를 올바른 위치에 삽입
    }
}

int main() {
    const int size = 10;  // const : 선언과 동시에 초기화
    int array[size] = {4, 5, 2, 3, 1, 6, 7, 9, 8, 10};
    insertionSort(array, size);

    for(int i=0; i<size; i++)
        printf("%d ", array[i]);
}