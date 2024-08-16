#include <stdio.h>
#include <stdlib.h>
#include "Doit_intStack.h"

/* 스택 초기화 */
int initialize(intStack *s, int max) {
    s->top = 0;
    if((s->stk = (int *)calloc(max, sizeof(int))) == NULL) {
        s->max = 0;
        return -1;
    }
    s->max = max;;
    return 0;
}
/* 스택의 크기에 변화있는건(Push, Pop, Clear) const X */
/* 스택에 PUSH */
int Push(intStack *s, int x) {
    if(s->top >= s->max)
        return -1;
    s->stk[s->top++] = x;
    return 0;
}
/* 스택에 POP */
int Pop(intStack *s, int *x) {
    if(s->top <= 0)
        return -1;
    *x = s->stk[--s->top];
    return 0;
}
/* 스택의 top 값 엿보기 */
int Peek(const intStack *s, int *x) {
    if(s->top <= 0)
        return -1;
    *x = s->stk[s->top - 1];
    return 0;
}
/* 스택의 모든 요소 삭제 */
int Clear(intStack *s) {
    s->top = 0;
    return 0;
}
/* 스택 용량 */
int Capacity(const intStack *s) {
    return s->max;
}
/* 스택에 쌓여있는 데이터 수 */
int Size(const intStack *s) {
    return s->top;
}
/* 스택이 비어있는가? */
int isEmpty(const intStack *s) {
    return s->top <= 0;
}
/* 스택이 가득찼는가? */
int isFull(const intStack *s) {
    return s->top >= s->max;
}
/* 스택에서 검색 */
int Search(const intStack *s, int x) {
    for(int i=0; i<s->top; i++) 
        if(s->stk[i] == x)
            return i;
    return -1;

}
/* 모든 데이터 출력 */
void Print(const intStack *s) {
    for(int i=0; i<s->top; i++)
        printf("%d ", s->stk[i]);
    printf("\n");
}
/* 스택 종료 */
void Terminate(intStack *s) {
    if(s->stk != NULL) 
        free(s->stk);   //배열 삭제
    s->max = s->top = 0;
}