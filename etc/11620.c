#include <stdio.h>
#include <stdlib.h>

int getnum(int count, char num[]);

int main(void) {
    int count;
    char *num;
    int result;

    scanf("%d", &count);

    num = (char *)malloc((count+1)*sizeof(char));
    if(num==NULL) {
        printf("malloc failed");
        return 1;
    }

    scanf("%s", num);
    result = getnum(count, num);
    printf("%d\n", result);
    free(num);
    
    return 0;
}

int getnum(int count, char num[]) {
    int sum=0, result=0;
    for(int i=0; i<count; i++)
        sum += (int)num[i];
    result = sum - count*48;

    return result;
}

