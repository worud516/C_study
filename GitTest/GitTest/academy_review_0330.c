#include <stdio.h>
typedef int bool;

#define true 1
#define false 0

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

int get_str_len(char* str) {
    int len = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        len++;
    }
    return len;
}


bool starts_with(char* str, char* start) {
    int str_len = get_str_len(str);
    int start_len = get_str_len(start);

    if (start_len > str_len) {
        return false;
    }
    for (int i = 0; i < start_len; i++) {
        if (str[i] != start[i]) {
            return false;
        }
    }
    return true;
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

    
// ���� : ����� ���� �Լ��� �ϼ����ּ���.


    bool rs;

    rs = starts_with("abc", "ab");
    printf("rs : %d\n", rs); // ��� rs : 1

    rs = starts_with("kbs", "kb");
    printf("rs : %d\n", rs); // ��� rs : 1

    rs = starts_with("mbc", "mc");
    printf("rs : %d\n", rs); // ��� rs : 0



    return 0;
}



