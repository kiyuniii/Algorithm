#include <stdio.h>

char stack[50];
int top = 0;

void push(char);
char pop();
int isEmpty();
int isVPS(char *);  //참(1), 거짓(0)이므로 in형 선언

int main() {
    int t;
    char str[51];

    scanf("%d", &t);
    for(int i=0; i<t; i++) {
        scanf("%s", str);
        if(isVPS(str)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

void push(char c) {
    stack[top++] = c;
}
char pop() {
    return stack[--top];
}
int isEmpty() {
    return top == 0;    //top이 0이면 true(1)반환, top!=1이면 false(0)반환
}                       //return 뒤에 조건이 붙은 형태