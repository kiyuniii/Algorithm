#include <stdio.h>
#define stack_size 100001

/* 구조체에는 멤버함수 정의 불가능 */
typedef struct {
    int top;
    int stack[stack_size];
} Stack;

void push(Stack* pstack, int pushValue);
int pop(Stack* pstack);

int main() {
    Stack stack1, stack2, stack3;
    stack1.top = -1;
    stack2.top = -1;
    stack3.top = -1;

    int num;
    scanf("%d", &num);

    int temp = 0;
    /* 수열 값을 받음 */
    for(int i=0; i<num; i++) {
        scanf("%d", &temp);
        push(&stack1, temp);
    }

    for(int i=0; i<100; i++) {
        while(stack2.stack[stack2.top] < stack1.stack[stack1.top]) {
            int i = 1;
            push(&stack2, i);
            i++;
        }
        if(stack2.stack[stack2.top] == stack1.stack[stack2.top]) {
            int poppedValue = 0;
            poppedValue = pop(&stack2);
            push(&stack3, poppedValue);
        }
        if(stack2.top == num) {
            while(stack2.top != -1) {
                int poppedValue = 0;
                poppedValue = pop(&stack2);
                push(&stack3, poppedValue);
            }
        }

    }   
}

void push(Stack* pstack, int pushValue) {
    pstack->stack[++(pstack->top)] = pushValue;
    printf("%c\n", '+');
}
int pop(Stack* pstack) {
    printf("%c\n", '-');
    return pstack->stack[(pstack->top)--];
}

/* 
[4 3 6 8 7 5 2 1] -> gate
[1 2 3 4 5 6 7 8]
[]
 */
