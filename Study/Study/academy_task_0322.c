// 문제 : 2중 포인터만 사용해서 함수안의 모든 지역변수의 값을 변경해주세요.
// 조건 : 아래와 같이 출력되도록 해주세요.
// 조건 : 수정가능지역에서는 오직 pp와, a1만 이용할 수 있습니다.
// 조건 : a1, a2, a3에 값을 변경하는 것은 오직 pp를 이용해서만 가능합니다.

#include <stdio.h>

void sol1() {
	int* p;
	int** pp = &p;

	int a1 = 0;
	int a2 = 0;
	int a3 = 0;

	printf("&a1 : %ld\n", (long)&a1);
	printf("&a2 : %ld\n", (long)&a2);
	printf("&a3 : %ld\n\n", (long)&a3);

	printf("&p : %ld\n", (long)&p);
	printf("&pp : %ld\n", (long)&pp);
	printf("pp : %ld\n\n", (long)pp);

	// 수정가능지역 시작
	*pp = &a1;
	**pp = 100;

	*pp = &a2;
	**pp = 200;

	*pp = &a3;
	**pp = 300;

	// 수정가능지역 끝

	printf("a1 : %d\n", a1);
	// 출력 => a1 : 100
	printf("a2 : %d\n", a2);
	// 출력 => a2 : 200
	printf("a3 : %d\n", a3);
	// 출력 => a3 : 300
}

int main(void) {
	printf("== 정답 ==\n");
	sol1();

	return 0;
}