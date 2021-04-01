#include <stdio.h>
#include <Windows.h>

//Animal 구조체 만들기
struct Animal {
	//구조체 내에서는 초기화 할 수 없다.
	char name[20];
	int age;
	char feed[20];
};

int main() {

	struct Animal dog;
	printf("동물 이름을 입력하세요\n");
	scanf_s("%s", dog.name, sizeof(dog.name));

	printf("%s 나이를 입력하세요\n", dog.name);
	scanf_s("%d", &dog.age);

	printf("%s 먹이를 입력하세요\n", dog.name);
	scanf_s("%s", dog.feed, sizeof(dog.feed));

	system("cls");

	printf("동물 이름 : %s\n", dog.name);
	printf("%s 나이 : %d살\n", dog.name, dog.age);
	printf("%s 먹이 : %s\n", dog.name, dog.feed);

	return 0;
}

//	구조체(타입)
//		변수		: 반복되는 값들을 편하게 관리하기 위해
//		함수		: 반복되는 문장들을 편하게 관리하기 위해
//		구조체		: 반복되는 변수들을 편하게 관리하기 위해
//					  (함수는 C++, JAVA에서 관리 가능 : 클래스)
//
//	공통요소 찾기
//
//	구조체 선언
//	struct 구조체이름 {
//		자료형 멤버변수명;
//		...
//	};
//
//	구조체 사용
//		. : 하위 연산자
//		A.B : A안에 B
//
//	(1)
//	struct 구조체이름 변수명;
//	변수명.멤버변수명 = 값;
//
//	(2) (명시적)
//	struct 구조체이름 변수명 = { .멤버변수명 = 값....... }
//
//	(3) (암묵적)
//	struct 구조체이름 변수명 = { 값...... }