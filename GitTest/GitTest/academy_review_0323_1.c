// ���� : main �Լ� �ȿ��ִ� int ������ ���� �� �ִ밪�� ������ּ���.
// ���� : ���� a0�� ��� ����

#include <stdio.h>

int main(void) {
    int a9, a8, a7, a6, a5, a4, a3, a2, a1, a0;

    a0 = -10;
    a1 = 10;
    a2 = 100;
    a3 = 210;
    a4 = 322210;
    a5 = 1440;
    a6 = 1130;
    a7 = 33210;
    a8 = 1210;
    a9 = 33210;

    // �ݺ����� ���� a0 ��� ����
    int max_number = 0;

    // ������������ ����
    for (int i = 0; i < 9; i++) {
        if (*(&a0 + i) > max_number) {
            max_number = *(&a0 + i);
        }
    }

    // ������������ ��

    printf("�ִ밪�� %d �Դϴ�.\n", max_number);

    return 0;
}