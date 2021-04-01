// 문제 : 상수 true, false와 변수타입 bool을 만들어주세요.

#include <stdio.h>
#define false 0
#define true 1

typedef int bool;

int main(void) {
    bool is_even = false;

    while (is_even) {}
    while (false) {}

    while (true) {
        printf("true는 1 이다.\n");
        break;
    }

    while (is_even == false) {
        printf("is_even 0 이다.\n");
        break;
    }

    return 0;
}