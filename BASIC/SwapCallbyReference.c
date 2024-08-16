/* 역순으로 정렬 
: swap() -> call by reference
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    ...
}
----------------------------
void swap(&a[i], &a[i-1]
----------------------------
int* x = &a[i];
)*/
#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void array_reverse(int a[], int n) {
    for(int i=0; i<n/2; i++) 
        swap(&a[i], &a[n-i-1]);
}

int main() {
    int size;
    printf("size >> ");
    scanf("%d", &size);
    int *array = calloc(size, sizeof(int));

    for(int i=0; i<size; i++) {
        printf("%d/%d >> ", i+1, size);
        scanf("%d", &array[i]);
    }
    puts("------------------------------\n");
    
    array_reverse(array, size);
    for(int i=0; i<size; i++) {
        printf("%d/%d >> %d", i+1, size, array[i]);
        printf("\n");
    }
    free(array);
}