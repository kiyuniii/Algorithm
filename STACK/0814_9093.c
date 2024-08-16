#include <stdio.h>
#include <string.h>

char array[1001];   //1000개의 문자 + NULL(\0) 1개 저장
int top = 0;        //문장의 최대길이 = 1000

int main() {
    int num;
    scanf("%d", &num);
    getchar();  //버퍼에 남아있는 개행문자(\n)를 제거

    for(int i=0; i<num; i++) {
        fgets(array, 1001, stdin);
        for(int j=0; j<strlen(array); j++) {
            if(array[j] == ' '|| array[j] == '\n') {    //개행이나 공백문자를 만난 경우
                for(int k=j-1; k >= top; k--)           //역순출력, top는 단어의 시작위치
                    printf("%c", array[k]);             //j-1 : 개행/공백문자의 전 요소
                top = j+1;                              //각 단어별로 역순취함
                printf(" ");
            }   
        }
        printf("\n");
        top = 0;
    }
    return 0;
}

/* fgets
char *fgets(char *str, int n, FILE *stream)
: 파일 또는 표준입력(키보드)에서 한 줄씩 문자열을 읽는 함수 */

/* 문장 2개를 입력받고 한번에 2개를 출력할 필요는 없다.
하나의 문장이 입력되면 바로 출력되는 구조로 설계해도 됨
문장들을 저장할 메모리구조가 필요하지 않다는 얘기 */