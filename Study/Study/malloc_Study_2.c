#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
//입력한 정수들을 오름차순으로 정렬하기
//선택정령 함수를 사용, call by address
//void 타입으로 선언
// 정렬하기\n 1.오름차순\n 2.내림차순\n 3.나가기\n

void sortAsc(int*, int);
void sortDsc(int*, int);


int main() {

	int* arNum = 0;
	int size = 0;
	int choice = 0;
	char* dot[] = { ".",".." ,"..." };
	char* loading[] = { "□□□□□□□□□", "■■■□□□□□□", "■■■■■■□□□" };


	while (1) {
		printf("입력하실 정수의 갯수를 입력하세요. (나가기 : -99)\n");
		scanf_s("%d", &size);

		if (size == -99) {
			break;
		}

		arNum = (int*)calloc(size, sizeof(int));

		printf("입력하신 갯수만큼 정수를 입력하세요\n");

		for (int i = 0; i < size; i++) {
			scanf_s("%d", arNum + i);
		}

		system("cls");
				
		for (int i = 0; i < size; i++) {
			printf("%d ", arNum[i]);
		}
		printf("\n");

	again:;
		printf("정렬하기\n 1.오름차순\n 2.내림차순\n 3.나가기\n");
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
			printf("잘못 입력하셨습니다. 다시 시도하세요");
			goto again;
		}

		system("cls");
		for (int i = 0; i < 3; i++) {
			printf("%s\n", loading[i]);
			printf("    정렬중%s", dot[i]);
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
