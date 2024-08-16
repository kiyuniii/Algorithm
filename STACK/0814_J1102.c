#include <stdio.h>
#define stack_size 10001

int stack[stack_size];
int top = -1;
int pushValue = 0;

void push(int x);
int isEmpty();
int pop();
int size();

int main() {
    int num = 0;
    scanf("%d", &num);
    char command;
    for(int i=0; i<num; i++) {
        scanf(" %c", &command);
        
        if(command == 'i') {
            scanf("%d", &pushValue);
            push(pushValue);
        }
        else if(command == 'o') {
/*          if(pop() == -1)
                printf("empty\n");
            else
                printf("%d\n", pop()); 
        //pop은 호출될 때마다 함수 내부의 값이 변하므로 반복시행 당 한번만 호출되도록 한다.
                */

            int poppedValue = pop();
            if(poppedValue == -1) printf("empty\n");
            else printf("%d\n", poppedValue);
        }
        else if(command == 'c') {
            printf("%d\n", size());
        }
    }
}

void push(int x) {
    stack[++top] = pushValue; 
}
int isEmpty() {
    if(top <= -1) return 1; //스택이 비어있음
    else return 0;
}
int pop() {
    if(isEmpty()) return -1;
    else {
        return stack[top--];
    } 
}
int size() {
    return top + 1; //요소가 있는 스택의 크기 계산
}