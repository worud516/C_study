// ���� : �Է¹��� 2���� ���� ���̿� �����ϴ� 3�� ��� �߿��� Ȧ���� ���� �����ϴ� �Լ� ����

#include <stdio.h>

int get_sum(int a, int b) {

	int sum = 0;

	for (int i = a; i <= b; i++) {
		if (i % 3 == 0 && i % 2 == 1) {
			sum += i;
		}
	}
	return sum;
}



int main(void) {

	printf("��� : %d\n", get_sum(50, 100));

	return 0;
}