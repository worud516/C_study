// 문제 : 몇명의 사람의 정보를 받을지 입력받고 입력받은 수 만큼 이름과 나이를 입력받은 후 저장해주세요.
// 조건 : malloc을 사용할 수 없습니다.
// 출력예시
/*
사람의 숫자를 입력해주세요. : 3[엔터]
1번째 사람의 이름을 입력해주세요 : aa[엔터]
1번째 사람의 나이를 입력해주세요 : 33[엔터]
2번째 사람의 이름을 입력해주세요 : bb[엔터]
2번째 사람의 나이를 입력해주세요 : 50[엔터]
3번째 사람의 이름을 입력해주세요 : cc[엔터]
3번째 사람의 나이를 입력해주세요 : 42[엔터]
1번째 사람의 이름, 나이 : aa, 33세
2번째 사람의 이름, 나이 : bb, 50세
3번째 사람의 이름, 나이 : cc, 42세
*/



#include <stdio.h>
#include <Windows.h>
#define SIZE 3


typedef struct Hu{

	char name[20];
	int age;

}H;


int main(void) {

	int num = 0;
	printf("인원수를 입력해주세요 : ");
	scanf_s("%d", &num);
	
	H arHu[SIZE];

	for (int i = 0; i < num; i++) {
		printf("%d번째 사람의 이름을 입력해주세요 : ", i + 1);
		scanf_s("%s", arHu[i].name ,sizeof(arHu[i].name));
		printf("%d번째 사람의 나이를 입력해주세요 : ", i + 1);
		scanf_s("%d", &arHu[i].age);
	}

	system("cls");

	for (int i = 0; i < num; i++) {
		printf("%d번째 사람의 이름, 나이 : %s, %d세\n", i + 1 ,arHu[i].name, arHu[i].age);
	}

	return 0;
}