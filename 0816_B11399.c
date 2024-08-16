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
    int n;
    scanf("%d", &n);

    int time[n];
    for(int i=0; i<n; i++)
        scanf("%d", &time[i]);
    selectionSort(time, n);

    int sum = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<i+1; j++) {
            sum += time[j];
        }
    }
    printf("%d", sum);
}

/* 
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5 */