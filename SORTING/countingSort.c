#include <stdio.h>
#define MAX_VALUE 10000 //배열의 값이 가질 수 있는 최대 값

void countingSort(int *array, int size) {   
    int count[MAX_VALUE + 1] = {0};
    int output[size];

    /* 배열 내 각 요소의 빈도를 count 배열에 저장 */
    for(int i=0; i<size; ++i)
        count[array[i]]++;
    /* 누적합 계산: count[i]는 이제 정렬된 배열에서 i의 마지막 위치를 나타냄 */    
    for(int i=1; i<=MAX_VALUE; ++i) 
        count[i] += count[i-1];
    /* output 배열에 정렬된 요소를 채움 */
    for(int i=size-1; i>=0; --i) {
        output[count[array[i]]-1] = array[i];
        count[array[i]]--;
    }
    /* 결과를 원래 배열로 복사 */
    for(int i=0; i<size; ++i) {
        array[i] = output[i];
    }
}

int main() {
    const int size = 10;  // const : 선언과 동시에 초기화
    int array[size] = {4, 5, 2, 3, 1, 6, 7, 9, 8, 10};
    countingSort(array, size);

    for(int i=0; i<size; i++)
        printf("%d ", array[i]);
}