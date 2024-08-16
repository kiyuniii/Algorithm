#include <stdio.h>

int main(void) {
    int num1, num2, num3;

    while(1)
    {
        int num1s, num2s, num3s;
        scanf("%d%d%d", &num1, &num2, &num3);

        if((num1==0) && (num2==0) && (num3==0))
            break;

        num1s = num1 * num1;
        num2s = num2 * num2;
        num3s = num3 * num3;

        if((num1s==num2s+num3s) || (num2s==num1s+num3s) || (num3s==num1s+num2s))
            printf("right\n");
        else
            printf("wrong\n");
    }
    return 0;
}