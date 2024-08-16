#include <stdio.h>
#include <stdlib.h>

int max(int count, int grade[]);
double newavg(int count, int grade[]);

int main(void) {
    int count;
    int *grade;
    double result;
    scanf("%d", &count);

    grade = (int *)malloc(count * sizeof(int));
    if(grade==NULL) {
        printf("malloc error");
        return 1;
    }

    for(int i=0; i<count; i++)
        scanf("%d", &grade[i]);

    result = newavg(count, grade);
    printf("%lf", result);

    free(grade);
    return 0;    
}

int max(int count, int grade[]) {
    int max = grade[0];
    for(int i=0; i<count; i++) {
        if(max <= grade[i])
            max = grade[i];
        else
            continue;
    }
    return max;
}

double newavg(int count, int grade[]) {
    double total=0, avg;
    int max_value = max(count, grade);

    // modified grade
    for(int i=0; i<count; i++) 
        total += (double)grade[i] * 100 / max_value;

    avg = total / count;
    return avg;
}