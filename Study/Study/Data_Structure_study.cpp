//	자료구조(Data Structure)의 개념
//	자료를 효울적으로 이용할 수 있도록 컴퓨터에 저장하는 방법이다.
//	신중히 선택한 자료구조는 보다 효율적인 알고리즘을 사용할 수 잇게 한다.
//	이러한 자료구조의 선택문제는 대개 추상적 자료구조의 선택으로부터 시작하는 경우가 많다.
//	효과적으로 설계된 자료구조는 실행시간 혹은 메모리 용량과 같은 자원을 최소한으로 사용하면서 연산을 수행하도록 해준다.



#include <stdio.h>


struct LIST {
	int data;
	LIST* next;
};

int IsEven(int num) {
	if ((num % 2) == 0) {
		return true;
	}
	else {
		return false;
	}
}

int Mul3(int num) {
	if ((num % 3) == 0) {
		return true;
	}
	else {
		return false;
	}
}

void main() {
	
	struct LIST item, * p;
	item.data = 100;
	item.next = NULL;
	
	p = &item;
	printf("변수표현 : %d ,포인터 표현 : %d \n", item.data, p->data);
	
	int dat;
	printf("숫자를 하나 입력해주세요. : ");
	scanf_s("%d", &dat);
	if (IsEven(dat)) {
		printf("입력한 값 %d는 짝수입니다.\n", dat);
	}
	else {
		printf("입력한 값 %d는 홀수입니다.\n", dat);
	}

	if (Mul3(dat)) {
		printf("입력한 값 %d는 3의 배수 입니다.\n", dat);
	}
	else {
		printf("입력한 값 %d는 3의 배수가 아닙니다.\n", dat);
	}


}