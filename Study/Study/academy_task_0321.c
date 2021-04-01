// 문제 : 입력받은 2가지 정수 사이에 존재하는 3의 배수 중에서 홀수의 합을 리턴하는 함수 구현

#include <stdio.h>

int get_sum(int a, int b) {

	int sum = 0;

	for (int i = a; i <= b; i++) {
		if (i % 3 == 0 && i % 2 == 1) {
			sum += i;
		}
	}
	return sum;
}



int main(void) {

	printf("결과 : %d\n", get_sum(50, 100));

	return 0;
}