// ���� : ���忡�� Ư�� ������ ��ġ�� ��ȯ�ϴ� �Լ��� ������ּ���.(get_index_of_c)

#include <stdio.h>


int get_index_of_c(char* a, char b) {

    int cnt = 1;

    for (int i = 0; *(a + i) != b; i++) {
        if (*(a + i) == '\0') {
            cnt = 0;
            break;
        }
        cnt++;
    }

    return cnt;
}


int main(void) {
    int index;

    index = get_index_of_c("abc", 'b');
    printf("index : %d\n", index);
    // ��� => index : 1

    index = get_index_of_c("test", 's');
    printf("index : %d\n", index);
    // ��� => index : 2

    index = get_index_of_c("test", 'x');
    printf("index : %d\n", index);
    // ��� => index : -1

    return 0;
}