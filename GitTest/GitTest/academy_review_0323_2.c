// 문제 : main 함수 안에있는 int 값들 중 최대값을 출력해주세요.
// 조건 : 변수 a만 사용 가능

#include <stdio.h>

int main(void) {
    int a[10];

    // 배열의 값 세팅
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

    // 반복문과 변수 a 사용 가능

    int max_number = 0;

    // 구현 시작
    for (int i = 0; i < 9; i++) {
        if (a[i] > max_number) {
            max_number = a[i];
        }
    }

    // 구현 끝


    printf("최대값은 %d 입니다.\n", max_number);

    return 0;
}