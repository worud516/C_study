// ���� : main �Լ� �ȿ��ִ� int ���� �� �ִ밪�� ������ּ���.
// ���� : ���� a�� ��� ����

#include <stdio.h>

int main(void) {
    int a[10];

    // �迭�� �� ����
    a[0] = -10;
    a[1] = 10;
    a[2] = 100;
    a[3] = 210;
    a[4] = 310;
    a[5] = 1440;
    a[6] = 1130;
    a[7] = 33210;
    a[8] = 1210;
    a[9] = 33210;

    // �ݺ����� ���� a ��� ����

    int max_number = 0;

    // ���� ����
    for (int i = 0; i < 9; i++) {
        if (a[i] > max_number) {
            max_number = a[i];
        }
    }

    // ���� ��


    printf("�ִ밪�� %d �Դϴ�.\n", max_number);

    return 0;
}