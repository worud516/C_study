//	�ڷᱸ��(Data Structure)�� ����
//	�ڷḦ ȿ�������� �̿��� �� �ֵ��� ��ǻ�Ϳ� �����ϴ� ����̴�.
//	������ ������ �ڷᱸ���� ���� ȿ������ �˰����� ����� �� �հ� �Ѵ�.
//	�̷��� �ڷᱸ���� ���ù����� �밳 �߻��� �ڷᱸ���� �������κ��� �����ϴ� ��찡 ����.
//	ȿ�������� ����� �ڷᱸ���� ����ð� Ȥ�� �޸� �뷮�� ���� �ڿ��� �ּ������� ����ϸ鼭 ������ �����ϵ��� ���ش�.



#include <stdio.h>


struct LIST {
	int data;
	LIST* next;
};

int IsEven(int num) {
	if ((num % 2) == 0) {
		return true;
	}
	else {
		return false;
	}
}

int Mul3(int num) {
	if ((num % 3) == 0) {
		return true;
	}
	else {
		return false;
	}
}

void main() {
	
	struct LIST item, * p;
	item.data = 100;
	item.next = NULL;
	
	p = &item;
	printf("����ǥ�� : %d ,������ ǥ�� : %d \n", item.data, p->data);
	
	int dat;
	printf("���ڸ� �ϳ� �Է����ּ���. : ");
	scanf_s("%d", &dat);
	if (IsEven(dat)) {
		printf("�Է��� �� %d�� ¦���Դϴ�.\n", dat);
	}
	else {
		printf("�Է��� �� %d�� Ȧ���Դϴ�.\n", dat);
	}

	if (Mul3(dat)) {
		printf("�Է��� �� %d�� 3�� ��� �Դϴ�.\n", dat);
	}
	else {
		printf("�Է��� �� %d�� 3�� ����� �ƴմϴ�.\n", dat);
	}


}