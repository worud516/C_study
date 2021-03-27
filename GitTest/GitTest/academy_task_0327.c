// 문제 : 문장에서 특정 부분만 잘라서 출력하는 함수를 만들어주세요.(print_sub_str)

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
	// 출력 => cd

	print_sub_str("abcd", 1, 3);
	// 출력 => bcd

	print_sub_str("abcd", 1, 10);
	// 출력 => bcd

	print_sub_str("abcd", 0, 2);
	// 출력 => ab

	return 0;
}