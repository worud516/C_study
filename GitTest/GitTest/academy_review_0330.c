#include <stdio.h>


int get_index_of_c(char* a, char b) {

    int cnt = 1;

    for (int i = 0; *(a + i) != b; i++) {
        if (*(a + i) == '\0') {
            cnt = -1;
            break;
        }
        cnt++;
    }

    return cnt;
}

void print_sub_str(char* s, int a, int b) {
    for (int i = a; i < b + a; i++) {
        if (*(s + i) == '\0') {
            break;
        }
        printf("%c", *(s + i));
    }
    printf("\n");
}

int main(void) {
    // ���� : ���忡�� Ư�� ������ ��ġ�� ��ȯ�ϴ� �Լ��� ������ּ���.(get_index_of_c)
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


// ���� : ���忡�� Ư�� �κи� �߶� ����ϴ� �Լ��� ������ּ���.(print_sub_str)

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



