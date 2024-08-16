#include <stdio.h>
#include <math.h>

void Prime(int a) {
    printf("%d", a);
    if(a == 1)
        puts("number one\n");
    else {
        for(int i=2; i<=sqrt(a); i++) {     //2부터 제곱근까지  
            if(a%i == 0) {                  //값의 나머지가 0 == 소수
                puts("prime_number\n");
                break;
            }
            else {
                puts("composite_number\n");
                break;
            }
        }
    }
}

int main() {
    int array[5];
    for(int i=0; i<5; i++) {
        scanf("%d", &array[i]);
        if(array[i]<0)
            return 0;
    }

    for(int i=0; i<5; i++) {
        printf("%d ", array[i]);
        Prime(array[i]);
    }
}