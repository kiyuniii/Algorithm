#include <stdio.h>
#include <stdlib.h>

int prime_count(int count, int num[]);

int main(void) {
    int count;
    int *num;
    int result;

    scanf("%d", &count);
    num = (int *)malloc(count * sizeof(int));
    if(num==NULL) {
        printf("malloc error");
        return 1;
    }

    for(int i=0; i<count; i++) {
        scanf("%d", &num[i]);
    }

    result = prime_count(count, num);
    printf("%d", result);

    free(num);
    return 0;
}

int prime_count(int count, int num[]) {
    int prime_count = 0;

    for(int i=0; i<count; i++) {
        int n = num[i];

        if(n<2)
            continue;
        
        int is_prime = 1;
        for(int j=2; j*j<=n; j++) {
            if(n % j == 0) { 
                is_prime = 0;
                break;
            }
        }

        if(is_prime)
            prime_count++;
    }
    return prime_count;
}