#include<stdio.h>
#include<string.h>
 
char array[100001];
char stack[100001];
char answer[100001];
 
int main() {
	int i, top = -1;                //stack이 비어있을 때 top을 -1로 설정
	scanf("%[^\n]", &array);        //\n이 나올떄까지 입력받는다.
	int len = strlen(array);
	for (i = 0; i < len; i++) {
		if (array[i] == '<') {
			while (top != -1) {
				answer[i - top - 1] = stack[top];
				top--;
			}
			while (array[i] != '>') {
				answer[i] = array[i];
				i++;
			}
			answer[i] = array[i];
		}
		else if (array[i] == ' ') {
			while (top != -1) {
				answer[i - top - 1] = stack[top];
				top--;
			}
			answer[i] = array[i];
		}
		else {
			top++;
			stack[top] = array[i];
		}
	}
	while (top != -1) {
		answer[i - top - 1] = stack[top];
		top--;
	}
	printf("%s", answer);
	return 0;
}