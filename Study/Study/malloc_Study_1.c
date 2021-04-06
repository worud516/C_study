//	�����Ҵ� (dynamic allocation)
//	malloc()
// �ڷ���* �����͸� = (�ڷ���*)malloc(sizeof(�ڷ���)*ũ��);
// �ڷ���* �����͸� = (�ڷ���*)malloc(ũ��);

// �����Ҵ� �ʱ�ȭ (clear allocation)
//	calloc()
//	�ڷ���* �����͸� = (�ڷ���*)calloc(ũ��, sizeof(�ڷ���));

// �����Ҵ� ũ�⺯��(resize allocation)
//	realloc()
//	�ڷ���* �����͸�1 = (�ڷ���*)malloc(sizeof(�ڷ���)*ũ��);
//	�ڷ���* �����͸�2 = (�ڷ���*)realloc(�����͸�1, sizeof(�ڷ���)*������ũ��);
// �� ���� �ִ� ���� ���� �Ǹ鼭 �þ

// �����Ҵ� �޸� ����(�߿�)
// free(�����͸�);
// �޸𸮸� �������� ������ ������� �ʰ� ���� �ֱ� ������ �� free�Լ��� �޷θ� ������ ����� �Ѵ�.

//	�����迭 ���
//	�����͸�[index]
//	*(�����͸� + i)



#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int* mArr = 0;

	mArr = (int*)malloc(sizeof(int) * 5);
	mArr = (int*)calloc(5, sizeof(int));
	mArr = (int*)realloc(mArr, sizeof(int) * 10);
	mArr = (int*)calloc(10, sizeof(int));

	for (int i = 0; i < 10; i++) {
		mArr[i] = i + 1;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d ", mArr[i]);
	}

	free(mArr);
	return 0;
}