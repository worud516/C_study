// ���� : ���忡�� Ư�� �κи� �߶� ����ϴ� �Լ��� ������ּ���.(print_sub_str)

#include <stdio.h>


void print_sub_str(int* a, int snum, int num) {

	for (int i = snum; i < (snum + num);  i++) {
		if (i == 4) {
			break;
		}
		printf("%c", *a + i);
	}
	printf("\n");
}




int main(void) {
	print_sub_str("abcd", 2, 2);
	// ��� => cd

	print_sub_str("abcd", 1, 3);
	// ��� => bcd

	print_sub_str("abcd", 1, 10);
	// ��� => bcd

	print_sub_str("abcd", 0, 2);
	// ��� => ab

	return 0;
}