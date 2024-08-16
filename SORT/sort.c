#include <stdio.h>
typedef int bool;
#define false 0
#define true 1

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void print(int *array, int size) {
    for(int i=0; i<size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int isSorted(int *array, int size) {
    for(int i=0; i<size-1; i++) {
        if(array[i] > array[i+1]) 
            return 0; //정렬안됨(0)
    }   
    return 1;      //정렬됨(1)
}
/* ================================================================= */

/* 선택 정렬(ON2): 최솟값을 맨 앞으로 이동 */
void selectionSort(int *array, int size) {
    for(int i=0; i<size; i++) {
        int index = i;                  //index: 작은 원소의 위치
        for(int j=i+1; j<size; j++) {
            if(array[j]<array[index])
                index = j;
        }
        swap(&array[i], &array[index]);
    }
    printf("selectionSort\n");
    print(array, size);
}

/* 버블 정렬(ON2): 인접한 두 원소를 비교 */
void bubbleSort(int *array, int size) {    
    for(int i=0; i<size; i++) {
        bool flag = 0;
        for(int j=0; j<size-1; j++) {
            if(array[j]>array[j+1]) {
                //인접한 두 원소를 비교
                swap(&array[j], &array[j+1]);
                flag = 1;   //swap이 발생하면 flag=1로 swap이 발생했음을 표시
            }   
        }
        if(!flag) break;    //더 이상 변경이 일어나지 않는다면 break
    }
    printf("bubbleSort\n");
    print(array, size);
}

/* 삽입 정렬(ON2): key, 이미 정렬된 부분(좌측)과 비교하여 정렬 */
void insertionSort(int *array, int size) {
    int count = 0;
    for(int i=1; i<size; i++) { //key를 좌측에서 우측으로 하나씩 넘김 (두번째 값부터 시작가능)
        int key = array[i];            //key는 i의 위치
        int j = i-1;            //비교값은 key의 한칸왼쪽값
        while(j >= 0 && array[j] > key) { //j>=0이고, 비교값이 key보다 크면 동작(반복)
            swap(&array[j+1], &array[j]); //비교값은 key와 자리바꿈(우측 한칸이동)
            j--;    //key를 왼쪽으로 한칸씩 이동시키며 기존 key의 왼쪽sector에 key를 위치시키려 반복
            count++;
        }
        array[j+1] = key;   //이동시키고 생긴 빈 자리에 key를 삽입함.
    }
    printf("insertionSort");
    print(array, size);
}



/* 계수 정렬(ON): 데이터가 몇 개 존재하는지 세어서 정렬(위치변경X), 데이터 범위 작을때 좋음 */
void countingSort(int *array, int size) {     //array[]: 실제값이 있는 배열, count[]: 0~99의 원소개수를 각각 저장
    printf("countingSort\n");
    int count[100000] = {0}; //배열의 모든 원소가 0~99이내에 존재, count[]의 모든원소를 초기화(0)
    for(int i=0; i<size; i++) 
        count[array[i]]++;  //e.g array[]의 원소값에 맞는 count[]의 원소값 1씩 증가
    for(int i=0; i<100000; i++) {
        if(count[i] != 0) {
            for(int j=0; j<count[i]; j++)
                printf("%d ", i);
        }
    }
    printf("\n");
}

/* 퀵 정렬(O(NlogN)):  */
/*  start: pivot보다 큰 값 나올 때
    end:   pivot보다 작은 값 나올 때
*/ 
void quickSort(int *array, int size, int start, int end) {
    if(start >= end) return;
    int pivot = start;
    int i = start+1, j = end;
    
    while(i <= j) {
        while(i <= end && array[i] <= array[pivot])  ++i;
        while(j > start && array[j] >= array[pivot]) --j;

        if(i >= j) break;
        swap(&array[i], &array[j]);
    }


    if(isSorted(array, size))  {    //정렬됨(1), 정렬안됨(0)
        printf("quickSort\n");
        print(array, size);
    }
    else {
        swap(&array[pivot], &array[j]);
        quickSort(array, size, start, j-1);
        quickSort(array, size, j+1, end);       
    }
}

/* 힙 정렬 */
/* 병합 정렬(O(NlogN)), STL: 분할정복 알고리즘 */
/* 기수 정렬(ON*최대자리수), STL: 모든 원소가 정수일 때만 사용가능, 낮은 자리수부터 비교정렬 
 * e.g 1의자리 정렬 -> 10의자리 정렬 -> 100의자리 정렬 ... */


int main() {
    int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    int array_countingSort[10] = {0, 1, 2, 1, 3, 2, 4, 1, 2, 4};
    int size = sizeof(array) / sizeof(array[0]);
    selectionSort(array, size); 
    bubbleSort(array, size);      
    insertionSort(array, size);
    countingSort(array, size);
    countingSort(array_countingSort, 10);
    quickSort(array, size, 0, 9);
}