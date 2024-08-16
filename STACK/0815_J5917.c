#include <stdio.h>
#define stack_size 10001

typedef struct {
    int top;
    int stack[stack_size];
} Stack;

void push(Stack* s, int value);
int pop(Stack *);

int main() {
    int num=0, time=0;
    scanf("%d%d", &num, &time);

    Stack dirty  = { .top = -1 };
    Stack washed = { .top = -1 };
    Stack dried  = { .top = -1 };

    /* 더러운 접시 초기화 */
    for(int i=num; i>=1; i--) 
        push(&dirty, i);

    for(int i=0; i<time; i++) {
        int C=0, T=0;
        scanf("%d%d", &C, &T);

        if(C == 1) {
            for(int j=0; j<T; j++) {
                int dish = pop(&dirty);
                push(&washed, dish);
            }
        }
        
        else if(C == 2) {
            for(int j=0; j<T; j++) {
                int dish = pop(&washed);
                push(&dried, dish);
            }
        }
    }

    while(dried.top >= 0)
        printf("%d\n", pop(&dried));
    return 0;
}

void push(Stack* s, int value) {
    s->stack[++(s->top)] = value;
}
int pop(Stack* s) {
    return s->stack[(s->top)--];
}