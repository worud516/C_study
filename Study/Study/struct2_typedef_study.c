//#include <stdio.h>
//#include <string.h>
//
//typedef struct Animal {
//	char name[20];
//	int age;
//	char feed[20];
//
//}Animal;
//
//
//int main() {
//
////	struct Animal dog = {.name = "Max", .age = 4, .feed = "사료"};
//	Animal dog = { "Max", 4, "사료" };
//	strcpy_s(dog.name,sizeof(dog.name), "Alex");
//	dog.age = 5;
//	strcpy_s(dog.feed, sizeof(dog.feed), "고급사료");
//
//	printf("%s %d살 %s\n", dog.name, dog.age, dog.feed);
//
//
//
//	return 0;
//}

#include <stdio.h>
/*
	과일 구조체 만들기
	과일이름, 가격, 계절
	사과, 배, 바나나
	초기화 후 출력
*/

typedef struct Fruit {
	char name[20];
	int price;
	char season[20];
}Fruit;


int main() {
	Fruit apple = { "사과", 2000, "가을" };
	Fruit pear = { "배", 3000, "가을" };
	Fruit banana = { "바나나", 1000, "사계절" };

	double avg = ((float)apple.price + pear.price + banana.price) / 3;

	printf("%s %d원 %s\n", apple.name, apple.price, apple.season);
	printf("%s %d원 %s\n", pear.name, pear.price, pear.season);
	printf("%s %d원 %s\n", banana.name, banana.price, banana.season);

	printf("과일 평균 가격 : %.1lf원\n", avg);
	
	return 0;
}