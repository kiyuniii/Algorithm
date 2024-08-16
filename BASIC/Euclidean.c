/* 최대공약수(GCD) - 유클리드 호제법
: 2개의 자연수 a, b(a>b)에 대해서 a를 b로 나눈 나머지가 r일 때,
a와 b의 최대공약수는 b와 r의 최대공약수와 같다.
r = a%b */

#include <stdio.h>

// 재귀함수
int Euclidean0(int a, int b) {
    if(b == 0)      //b!=0이면 a가 최대공약수
        return a;
    else
        Euclidean0(b, a%b);
}

// for 반복문
int Euclidean1(int a, int b) {
    while(1) {
        int tmp = b;
        b = a%b;
        a = tmp;

        if(b==0) {
            break;
        }
    }
    return a;
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int result = Euclidean0(a, b);
    printf("%d", result);

    return 0;
}