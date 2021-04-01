// ���� : 2�� �����͸� ����ؼ� �Լ����� ��� ���������� ���� �������ּ���.
// ���� : �Ʒ��� ���� ��µǵ��� ���ּ���.
// ���� : ������������������ ���� pp��, a1�� �̿��� �� �ֽ��ϴ�.
// ���� : a1, a2, a3�� ���� �����ϴ� ���� ���� pp�� �̿��ؼ��� �����մϴ�.

#include <stdio.h>

void sol1() {
	int* p;
	int** pp = &p;

	int a1 = 0;
	int a2 = 0;
	int a3 = 0;

	printf("&a1 : %ld\n", (long)&a1);
	printf("&a2 : %ld\n", (long)&a2);
	printf("&a3 : %ld\n\n", (long)&a3);

	printf("&p : %ld\n", (long)&p);
	printf("&pp : %ld\n", (long)&pp);
	printf("pp : %ld\n\n", (long)pp);

	// ������������ ����
	*pp = &a1;
	**pp = 100;

	*pp = &a2;
	**pp = 200;

	*pp = &a3;
	**pp = 300;

	// ������������ ��

	printf("a1 : %d\n", a1);
	// ��� => a1 : 100
	printf("a2 : %d\n", a2);
	// ��� => a2 : 200
	printf("a3 : %d\n", a3);
	// ��� => a3 : 300
}

int main(void) {
	printf("== ���� ==\n");
	sol1();

	return 0;
}