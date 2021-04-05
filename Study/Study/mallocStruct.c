#include <stdio.h>
#include <stdlib.h>

typedef struct Fruit {
	char name[20];
	int price;
	char season[20];
}F;


void main() {
	/*F apple = { "사과", 100, "여름" };
	scanf_s("%s", apple.name, sizeof(apple.name));
	strcpy_s(apple.name, sizeof(apple.name), "바나나");*/
	//자료형* 포인터명 = (자료형*)malloc(sizeof(자료형)*크기);

	F* arFruit;
	int size = 0;
	int sum = 0;

	printf("입력하실 과일의 갯수를 입력하세요\n");
	scanf_s("%d", &size);

	arFruit = (F*)malloc(sizeof(F) * size);
	for (int i = 0; i < size; i++) {
		printf("%d번째 과일 이름 : ", i + 1);
		scanf_s("%s", arFruit[i].name, sizeof(arFruit[i].name));
		printf("과일 가격 : ");
		scanf_s("%d", &arFruit[i].price);
		printf("과일 계절 : ");
		scanf_s("%s", arFruit[i].season, sizeof(arFruit[i].season));
		sum += arFruit[i].price;
	}
	printf("\n\n");
	for (int i = 0; i < size; i++) {
		printf("%s %d원 %s\n", arFruit[i].name, arFruit[i].price, arFruit[i].season);
	}
	printf("과일들의 평균 가격 : %.2lf원\n", (double)sum / size);
}