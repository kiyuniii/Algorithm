#include <stdio.h>
#define stack_size 100001

int stack[stack_size];
int top = -1;

void push(int n);
int pop();

int main() {
    int num;
    scanf("%d", &num);
    
    int pushValue = 0;
    for(int i=0; i<num; i++) {
        scanf("%d", &pushValue);
        if(pushValue == 0) 
            pop(); 
        else
            push(pushValue);
    }

    int result = 0;
    for(int i=0; i<=top; i++) {
        result += stack[i];
    }
    printf("%d", result);
}

void push(int n) {
    stack[++top] = n;
}
int pop() {
    return stack[top--];
}