// ���� : ����� ����� ������ ������ �Է¹ް� �Է¹��� �� ��ŭ �̸��� ���̸� �Է¹��� �� �������ּ���.
// ��¿���
/*
����� ���ڸ� �Է����ּ���. : 3[����]
1��° ����� �̸��� �Է����ּ��� : aa[����]
1��° ����� ���̸� �Է����ּ��� : 33[����]
2��° ����� �̸��� �Է����ּ��� : bb[����]
2��° ����� ���̸� �Է����ּ��� : 50[����]
3��° ����� �̸��� �Է����ּ��� : cc[����]
3��° ����� ���̸� �Է����ּ��� : 42[����]
1��° ����� �̸�, ���� : aa, 33��
2��° ����� �̸�, ���� : bb, 50��
3��° ����� �̸�, ���� : cc, 42��
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

	
	printf("�ο����� �Է����ּ��� : ");
	scanf_s("%d", &size);

	Person* people;

	people = (Person*)malloc(sizeof(Person) * size);
	people = (Person*)calloc(size, sizeof(Person));


	printf("%d��  ������ ������ Ȯ���մϴ�. (������ �Ҵ��մϴ�.)\n", size);

	

	for (int i = 0; i < size; i ++) {
		printf("%d��° ����� �̸��� �Է����ּ��� : ", i + 1);
		scanf_s("%s", people[i].name, sizeof(people[i].name));
		
		printf("%d��° ����� ���̸� �Է����ּ��� : ", i + 1);
		scanf_s("%d", &people[i].age);
	}

	system("cls");

	for (int i = 0; i < size; i++) {
		printf("%d��° ����� �̸�, ���� : %s, %d��\n", i + 1, people[i].name, people[i].age);
	}


	free(people);
	return 0;
}