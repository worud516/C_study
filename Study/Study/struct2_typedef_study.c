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
////	struct Animal dog = {.name = "Max", .age = 4, .feed = "���"};
//	Animal dog = { "Max", 4, "���" };
//	strcpy_s(dog.name,sizeof(dog.name), "Alex");
//	dog.age = 5;
//	strcpy_s(dog.feed, sizeof(dog.feed), "��޻��");
//
//	printf("%s %d�� %s\n", dog.name, dog.age, dog.feed);
//
//
//
//	return 0;
//}

#include <stdio.h>
/*
	���� ����ü �����
	�����̸�, ����, ����
	���, ��, �ٳ���
	�ʱ�ȭ �� ���
*/

typedef struct Fruit {
	char name[20];
	int price;
	char season[20];
}Fruit;


int main() {
	Fruit apple = { "���", 2000, "����" };
	Fruit pear = { "��", 3000, "����" };
	Fruit banana = { "�ٳ���", 1000, "�����" };

	double avg = ((float)apple.price + pear.price + banana.price) / 3;

	printf("%s %d�� %s\n", apple.name, apple.price, apple.season);
	printf("%s %d�� %s\n", pear.name, pear.price, pear.season);
	printf("%s %d�� %s\n", banana.name, banana.price, banana.season);

	printf("���� ��� ���� : %.1lf��\n", avg);
	
	return 0;
}