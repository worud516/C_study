#include <stdio.h>
#include <stdlib.h>

typedef struct Fruit {
	char name[20];
	int price;
	char season[20];
}F;


void main() {
	/*F apple = { "���", 100, "����" };
	scanf_s("%s", apple.name, sizeof(apple.name));
	strcpy_s(apple.name, sizeof(apple.name), "�ٳ���");*/
	//�ڷ���* �����͸� = (�ڷ���*)malloc(sizeof(�ڷ���)*ũ��);

	F* arFruit;
	int size = 0;
	int sum = 0;

	printf("�Է��Ͻ� ������ ������ �Է��ϼ���\n");
	scanf_s("%d", &size);

	arFruit = (F*)malloc(sizeof(F) * size);
	for (int i = 0; i < size; i++) {
		printf("%d��° ���� �̸� : ", i + 1);
		scanf_s("%s", arFruit[i].name, sizeof(arFruit[i].name));
		printf("���� ���� : ");
		scanf_s("%d", &arFruit[i].price);
		printf("���� ���� : ");
		scanf_s("%s", arFruit[i].season, sizeof(arFruit[i].season));
		sum += arFruit[i].price;
	}
	printf("\n\n");
	for (int i = 0; i < size; i++) {
		printf("%s %d�� %s\n", arFruit[i].name, arFruit[i].price, arFruit[i].season);
	}
	printf("���ϵ��� ��� ���� : %.2lf��\n", (double)sum / size);
}