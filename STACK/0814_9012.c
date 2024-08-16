#include <stdio.h>

char stack[50];
int top = 0;

int isVPS(char *);
void push(char);
char pop();     //push, pop, isEmpty 모두 전역변수로 설정되어 동일한 스택을 조작함
int isEmpty();  //참(1), 거짓(0)이므로 in형 선언

int main() {
    int t;
    char str[51];  //NULL 문자 포함하기 위해 1개 더 추가해서 51

    int i;
    scanf("%d", &t);
    for(int i=0; i<t; i++) {
        scanf("%s", str);   //문자열이므로 &생략
        if(isVPS(str)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

int isVPS(char *str) {
    int result = 1;
    for(int i=0; str[i]; i++) {     
        if(str[i] == '(') push(str[i]); //여는문자면 push
        else {                          //닫힌문자의 경우
            if(isEmpty()) {             //빈 스택이면 0반환 (짝 불가)
                result = 0;             
                break;
            }
            else {                      //빈 스택 아니면(=여는문자 있으면)
                pop();                  //해당 여는문자를 pop(스택에서 지움)
            }                       
        }                               // ( ( <- ) = (, ( <- ) = " "
    }
    if(!isEmpty()) result = 0;          //남아있는 문자가 있다면 VPS가 아니다
    while(!isEmpty()) pop();            //스택이 비어있지 않을 때(!isEmpty()) pop함
    return result;
}

/* 전형적인 스택의 구조(C lang) */
void push(char c)  {
    stack[top++] = c;       //top++
}
char pop() {
    return stack[--top];    //직접적으로 요소를 삭제하는 것이 아니라
}                           //단순이 top이 그 부분에 접근하지 않도록 함으로써 pop구현
int isEmpty() {             //top이 0이면 true(1)반환
    return top == 0;        //return 뒤에 조건이 붙은 형태
}