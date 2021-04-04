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
		{"사과", 1500, "가을"},
		{"배", 2000, "가을"},
		{"바나나", 900, "사계절"}
	};

	for (int i = 0; i < SIZE; i++) {
		printf("%s %d원 %s\n", arFruit[i].name, arFruit[i].price, arFruit[i].season);
		sum += arFruit[i].price;
	}

	avg = sum / SIZE;

	printf("과일 총 가격 : %d원\n", sum);
	printf("과일 평균 가격 : %.1lf원\n", avg);


	return 0;
}