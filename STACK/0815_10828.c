#include <stdio.h>
#include <string.h>
#define stack_size 100001

int top = -1;
int stack[stack_size];

void push(int x);
int pop();
int getTop();
int empty();

int main() {
    int count = 0;
    int pushValue = 0; 
    char command[10];
    scanf("%d", &count);

    for(int i=0; i<count; i++) {
        scanf("%s", command);       //command = 배열(문자열)이므로 %c가 아닌 %s

        if(!strcmp(command, "push")) {
            scanf("%d", &pushValue);
            push(pushValue);
        }
        else if(!strcmp(command, "pop"))
            printf("%d\n", pop());
        else if(!strcmp(command, "empty"))
            printf("%d\n", empty());
        else if(!strcmp(command, "size"))
            printf("%d\n", top+1);
        else if(!strcmp(command, "top"))
            printf("%d\n", getTop());
    }
    return 0;
}

void push(int x) {
    top++;
    stack[top] = x;
}
int empty() {
    if(top == -1) return 1;
    else return 0;
}
int pop() {
    if(empty()) return -1;
    else return stack[top--];   //return stack[top]; top--;
}
int getTop() {
    if(empty()) return -1;
    else return stack[top];
}