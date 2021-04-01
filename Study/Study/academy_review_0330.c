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

bool ends_with(char* str, char* keyword) {
    int len_of_str = get_str_len(str);
    int len_of_keyword = get_str_len(keyword);

    if (len_of_keyword > len_of_str) {
        return false;
    }
    //start point
    int start = len_of_str - len_of_keyword;
    int end = len_of_str;

    for (int i = start; i < end; i++) {
        if (str[i] != keyword[i - start]) {
            return false;
        }
    }
    return true;
}

bool str_equals(char* str1, char* str2) {
    int len_of_str1 = get_str_len(str1);
    int len_of_str2 = get_str_len(str2);

    if (len_of_str1 != len_of_str2) {
        return false;
    }
    for (int i = 0; i < len_of_str1; i++) {
        if (str1[i] != str2[i]) {
            return false;
        }
    }
    return true;
}

int str_part_equals(char* str1, int a, int b, char* str2) {
    int c = 0;
    for (int i = a; i < b; i++) {
        if (str1[i] != str2[c]) {
            return 0;
        }
        c++;
    }
    return 1;
}


int get_index_of_str(char* str1, char* str2) {
    int cnt = get_str_len(str1);
    int cnt2 = get_str_len(str2);
    int cnt3 = 0;
    int cnt4 = 0;
    int cnt5 = 0;

    for (int i = 0; i < cnt; i++) {
        if (str1[i] == str2[0]) {
            cnt3 = i;
            cnt5 = i;
            for (int j = 0; j < cnt2; j++) {
                if (str1[cnt3] == str2[j]) {
                    cnt4++;
                }
                cnt3++;
            }
            if (cnt4 == cnt2) {
                return cnt5;
            }
        }
    }
    return -1;
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
    printf("\n");

    // 문제 : 문장에서 특정 부분만 잘라서 출력하는 함수를 만들어주세요.(print_sub_str)

    print_sub_str("abcd", 2, 2);
    // 출력 => cd

    print_sub_str("abcd", 1, 3);
    // 출력 => bcd

    print_sub_str("abcd", 1, 10);
    // 출력 => bcd

    print_sub_str("abcd", 0, 2);
    // 출력 => ab
    printf("\n");

    // 문제 : 출력을 보고 함수를 완성해주세요.


    bool rs;

    rs = starts_with("abc", "ab");
    printf("rs : %d\n", rs); // 출력 rs : 1

    rs = starts_with("kbs", "kb");
    printf("rs : %d\n", rs); // 출력 rs : 1

    rs = starts_with("mbc", "mc");
    printf("rs : %d\n\n", rs); // 출력 rs : 0


// 문제 : 출력을 보고 함수를 완성해주세요.


    rs = ends_with("abc", "bc");
    printf("rs : %d\n", rs); // 출력 rs : 1

    rs = ends_with("kbs", "kb");
    printf("rs : %d\n", rs); // 출력 rs : 0

    rs = ends_with("kbs", "bs");
    printf("rs : %d\n", rs); // 출력 rs : 1

    rs = ends_with("mbc", "mc");
    printf("rs : %d\n", rs); // 출력 rs : 0

    printf("\n");
    // 문제 : 출력을 보고 함수를 완성해주세요.

    char* str1 = "abc";
    char* str2 = "abc";
    char* str3 = "abcd";
    char* str4 = "bbc";
    char str5[] = "abc";

    printf("`%s` is equals to `%s` : %d\n", str1, str1, str_equals(str1, str1));
    // 출력 => `abc` is equals to `abc` : 1

    printf("`%s` is equals to `%s` : %d\n", str1, str2, str_equals(str1, str2));
    // 출력 => `abc` is equals to `abc` : 1

    printf("`%s` is equals to `%s` : %d\n", str1, str3, str_equals(str1, str3));
    // 출력 => `abc` is equals to `abcd` : 0

    printf("`%s` is equals to `%s` : %d\n", str1, str4, str_equals(str1, str4));
    // 출력 => `abc` is equals to `bbc` : 0

    printf("`%s` is equals to `%s` : %d\n", str1, str5, str_equals(str1, str5));
    // 출력 => `abc` is equals to `abc` : 1

    printf("\n");

    // 문제 : 출력을 보고 함수를 완성해주세요.

    printf("str_part_equals(\"abcd\", 0, 2, \"ab\") : %d\n", str_part_equals("abcd", 0, 2, "ab"));
    // 출력 => str_equals("abcd", 0, 2, "ab") : 1

    printf("str_part_equals(\"abcd\", 1, 2, \"b\") : %d\n", str_part_equals("abcd", 1, 2, "b"));
    // 출력 => str_equals("abcd", 1, 2, "b") : 1

    printf("str_part_equals(\"abcd\", 2, 2, \"\") : %d\n", str_part_equals("abcd", 2, 2, ""));
    // 출력 => str_equals("abcd", 2, 2, "") : 1

    printf("str_part_equals(\"abcd\", 2, 4, \"cb\") : %d\n", str_part_equals("abcd", 2, 4, "cb"));
    // 출력 => str_equals("abcd", 2, 4, "cb") : 0

    printf("str_part_equals(\"abcd\", 2, 4, \"cd\") : %d\n", str_part_equals("abcd", 2, 4, "cd"));
    // 출력 => str_equals("abcd", 2, 4, "cb") : 1

    printf("\n");


    // 문제 : 문장에서 특정 문장의 위치를 반환하는 함수를 만들어주세요.(get_index_of_str)


    index = get_index_of_str("abc", "b");
    printf("index : %d\n", index);
    // 출력 => index : 1

    index = get_index_of_str("test", "st");
    printf("index : %d\n", index);
    // 출력 => index : 1

    index = get_index_of_str("abcd", "bd");
    printf("index : %d\n", index);
    // 출력 => index : -1

    return 0;
}



