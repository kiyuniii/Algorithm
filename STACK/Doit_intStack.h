#ifndef DOIT_INTSTACK_H
#define DOIT_INTSTACK_H

typedef struct {
    int max;    //최대 스택 크기
    int top;    //현재 스택 크기
    int *stk;   //스택
} intStack;

int initialize(intStack *s, int max);
int Push(intStack *s, int x);
int Pop(intStack *s, int *x);
int Peek(const intStack *s, int *x);
int Clear(intStack *s);
int Capacity(const intStack *s);
int Size(const intStack *s);
int isEmpty(const intStack *s);
int isFull(const intStack *s);
int Search(const intStack *s, int x);
void Print(const intStack *s);
void Terminate(intStack *s);

#endif