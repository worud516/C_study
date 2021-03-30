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
    // 문제 : 문장에서 특정 문자의 위치를 반환하는 함수를 만들어주세요.(get_index_of_c)
    int index;

    index = get_index_of_c("abc", 'b');
    printf("index : %d\n", index);
    // 출력 => index : 1

    index = get_index_of_c("test", 's');
    printf("index : %d\n", index);
    // 출력 => index : 2

    index = get_index_of_c("test", 'x');
    printf("index : %d\n", index);
    // 출력 => index : -1


// 문제 : 문장에서 특정 부분만 잘라서 출력하는 함수를 만들어주세요.(print_sub_str)

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



