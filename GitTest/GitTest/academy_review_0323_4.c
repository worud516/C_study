// 문제 : 배열에 숫자 100개 저장 후 저장된 각각의 숫자를 모두 출력해주세요.
// 조건 : 배열문법 사용불가
// 배열문법 : arr[0], arr[1];
// 힌트 : arr은 int 포인터 변수이다.
// 힌트 : arr은 첫 번째 상자의 주소를 가지고 있다.
// 힌트 : int배열이기 때문에 상자간의 거리는 4이다.

#include <stdio.h>

int main() {
    // 공간 101개가 만들어집니다.
    // arr => 배열의 시작점을 가리키는 포인터 변수.
    // arr => arr[0]변수의 주소값을 가진다.
    int arr[100];

    // 수정가능지역 시작

    for (int i = 0; i < 100; i++) {
        *(arr + i) = i+1;
        printf("%d ", *(arr + i));
    }
    // 수정가능지역 끝

    return 0;
}