// ���� : ��� true, false�� ����Ÿ�� bool�� ������ּ���.

#include <stdio.h>
#define false 0
#define true 1

typedef int bool;

int main(void) {
    bool is_even = false;

    while (is_even) {}
    while (false) {}

    while (true) {
        printf("true�� 1 �̴�.\n");
        break;
    }

    while (is_even == false) {
        printf("is_even 0 �̴�.\n");
        break;
    }

    return 0;
}