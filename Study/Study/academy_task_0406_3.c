// 문제 : 몇명의 사람의 정보를 받을지 입력받고 입력받은 수 만큼 이름과 나이를 입력받은 후 저장해주세요.
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
#include <stdlib.h>
#include <Windows.h>

typedef struct _Person {
	int age;
	char name[20];
}Person;


int main(void) {
	
	int size;

	
	printf("인원수를 입력해주세요 : ");
	scanf_s("%d", &size);

	Person* people;

	people = (Person*)malloc(sizeof(Person) * size);
	people = (Person*)calloc(size, sizeof(Person));


	printf("%d명  저장할 공간을 확보합니다. (힙에서 할당합니다.)\n", size);

	

	for (int i = 0; i < size; i ++) {
		printf("%d번째 사람의 이름을 입력해주세요 : ", i + 1);
		scanf_s("%s", people[i].name, sizeof(people[i].name));
		
		printf("%d번째 사람의 나이를 입력해주세요 : ", i + 1);
		scanf_s("%d", &people[i].age);
	}

	system("cls");

	for (int i = 0; i < size; i++) {
		printf("%d번째 사람의 이름, 나이 : %s, %d세\n", i + 1, people[i].name, people[i].age);
	}


	free(people);
	return 0;
}