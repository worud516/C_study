#include <stdio.h>
#define SIZE 3

typedef struct Fruit {
	char name[20];
	int price;
	char season[20];
}F;


int main() {

	int sum = 0;
	double avg = 0;

	
	F arFruit[3] = {
		{"���", 1500, "����"},
		{"��", 2000, "����"},
		{"�ٳ���", 900, "�����"}
	};

	for (int i = 0; i < SIZE; i++) {
		printf("%s %d�� %s\n", arFruit[i].name, arFruit[i].price, arFruit[i].season);
		sum += arFruit[i].price;
	}

	avg = sum / SIZE;

	printf("���� �� ���� : %d��\n", sum);
	printf("���� ��� ���� : %.1lf��\n", avg);


	return 0;
}