#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
//�Է��� �������� ������������ �����ϱ�
//�������� �Լ��� ���, call by address
//void Ÿ������ ����
// �����ϱ�\n 1.��������\n 2.��������\n 3.������\n

void sortAsc(int*, int);
void sortDsc(int*, int);


int main() {

	int* arNum = 0;
	int size = 0;
	int choice = 0;
	char* dot[] = { ".",".." ,"..." };
	char* loading[] = { "����������", "����������", "����������" };


	while (1) {
		printf("�Է��Ͻ� ������ ������ �Է��ϼ���. (������ : -99)\n");
		scanf_s("%d", &size);

		if (size == -99) {
			break;
		}

		arNum = (int*)calloc(size, sizeof(int));

		printf("�Է��Ͻ� ������ŭ ������ �Է��ϼ���\n");

		for (int i = 0; i < size; i++) {
			scanf_s("%d", arNum + i);
		}

		system("cls");
				
		for (int i = 0; i < size; i++) {
			printf("%d ", arNum[i]);
		}
		printf("\n");

	again:;
		printf("�����ϱ�\n 1.��������\n 2.��������\n 3.������\n");
		scanf_s("%d", &choice);
		if (choice == 3) {
			break;
		}
		switch (choice){
		case 1 :
			sortAsc(arNum, size);
			break;

		case 2:
			sortDsc(arNum, size);
			break;

		default:
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �õ��ϼ���");
			goto again;
		}

		system("cls");
		for (int i = 0; i < 3; i++) {
			printf("%s\n", loading[i]);
			printf("    ������%s", dot[i]);
			Sleep(1000);
			system("cls");
		}

		for (int i = 0; i < size; i++) {
			printf("%d ", arNum[i]);
			Sleep(500);
		}
		printf("\n");


	}

	free(arNum);

	return 0;
}

void sortAsc(int* ar, int length) {
	for (int i = 0; i < length - 1; i++) {
		for(int j = i + 1; j< length; j++){
			if (ar[i] > ar[j]) {
				int temp = ar[i];
				ar[i] = ar[j];
				ar[j] = temp;
			}
		}
	}
}

void sortDsc(int* ar, int length) {
	for (int i = 0; i < length - 1; i++) {
		for (int j = i + 1; j < length; j++) {
			if (ar[i] < ar[j]) {
				int temp = ar[i];
				ar[i] = ar[j];
				ar[j] = temp;
			}
		}
	}
}
