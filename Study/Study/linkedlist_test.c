// 문제 : 몇명의 회원을 받을지 미리 알 수 없는 상태에서 회원 추가를 구현 해주세요.

// 예시
/*
1번째 회원의 이름을 입력해주세요(0 입력시 종료) : aa[엔터]
1번째 회원의 나이를 입력해주세요 : 11[엔터]
2번째 회원의 이름을 입력해주세요(0 입력시 종료) : bb[엔터]
2번째 회원의 나이를 입력해주세요 : 22[엔터]
3번째 회원의 이름을 입력해주세요(0 입력시 종료) : cc[엔터]
3번째 회원의 나이를 입력해주세요 : 33[엔터]
4번째 회원의 이름을 입력해주세요(0 입력시 종료) : 0[엔터]
입력을 종료합니다.
== 전체 회원 리스트 ==
1번째 회원 : aa, 11살
2번째 회원 : bb, 22살
3번째 회원 : cc, 33살
방금 출력한 사람이 마지막 사람이었습니다.
== 출력끝 ==
== 메모리 반납 시작 ==
1번째 사람의 메모리를 반납합니다.
2번째 사람의 메모리를 반납합니다.
3번째 사람의 메모리를 반납합니다.
방금 삭제한 사람이 마지막 사람이었습니다.
== 메모리 반납 끝 ==
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#pragma warning (disable: 4996)

#define true 1
#define PERSON_NAME_SIZE 100

typedef struct _Person {
    int age;
    char name[PERSON_NAME_SIZE];
    struct _Person* next;
} Person;

int main(void) {
    Person* current = NULL;
    Person* first = NULL;
    Person* last = NULL;

    char inputed_name[PERSON_NAME_SIZE];
    int inputed_age;

    for (int i = 1; true; i++) {
        printf("%d번째 회원의 이름을 입력해주세요(0 입력시 종료) : ", i);
        scanf("%s", inputed_name);

        if (inputed_name[0] == '0') {
            printf("입력을 종료합니다.\n");
            break;
        }

        printf("%d번째 회원의 나이를 입력해주세요 : ", i);
        scanf("%d", &inputed_age);

        current = malloc(sizeof(Person));

        strcpy(current->name, inputed_name);
        current->age = inputed_age;
        current->next = NULL;

        if (first == NULL) {
            first = current; // 내(1등)가 처음 사람이 된다.
        }
        else {
            last->next = current; // 기존의 꼴등(1등)이 나(2등)를 가리킨다.
        }

        last = current; // 내(1등)가 처음 사람이자 마지막 사람이다.
    }

    printf("== 전체 회원 리스트 ==\n");
    // 모든 사람의 이름과 나이 출력
    current = first; // 아주 중요
    for (int i = 1; true; i++) {
        printf("%d번째 회원 : %s, %d살\n", i, current->name, current->age);

        if (current->next == NULL) {
            printf("방금 출력한 사람이 마지막 사람이었습니다.\n");
            break;
        }

        current = current->next;
    }

    printf("== 출력끝 ==\n");

    printf("== 메모리 반납 시작 ==\n");
    current = first; // 아주 중요
    for (int i = 1; true; i++) {
        printf("%d번째 사람의 메모리를 반납합니다.\n", i);
        Person* del = current; // 삭제할 사람의 주소를 미리 저장한 후
        current = current->next; // current는 이제 다음 사람을 가리키게 한다.
        free(del); // 아까 적어뒀던 주소에 있는 사람을 삭제(메모리 반납)시킨다.
        if (current == NULL) {
            printf("방금 삭제한 사람이 마지막 사람이었습니다.\n");
            break;
        }
    }

    printf("== 메모리 반납 끝 ==\n");

    return 0;
}

/*
사람의 3명 만들어주세요.
단 사람을 지역변수로 만들 수 없습니다.
즉 malloc을 통해서 힙에 사람을 만들라는 뜻입니다.
이는 나중에 free를 해야한다는 걸 의미 합니다.
즉 사람을 구조체 포인터로만 다루라는 뜻 입니다.
사람은 자신의 이름과 나이를 기억할 수 있습니다.
사람은 자신 말고도 사람한명의 위치를 기억할 수 있습니다.
즉 사람 구조체의 변수는 3개 입니다.
처음 사람은 두번째 사람의 위치를 알아야 합니다.
두번째 사람은 세번째사람의 위치를 알아야 합니다.
마지막 사람의 next 변수에는 NULL이 들어가야 합니다.
처음사람의 위치가 주어진 상황에서 반복문을 통해, 마지막 사람까지 접근하여주세요.
즉 모든 사람의 이름과 나이가 출력되어야 합니다.
first 변수에는 처음사람의 위치가 들어가야 합니다.
즉 first 변수에는 1등이 들어갑니다.
그래서 first 변수에는 값이 1번만 들어갑니다.
current 변수에는 지금 막 태어난(malloc으로 만들어진) 사람의 위치가 들어가거나, 반복문에서 각각의 사람에게 접근할 때 사용됩니다.
last 변수에는 가장 마지막에 추가된(만들어진, malloc으로 생성된) 사람의 주소가 들어가야 합니다.
즉 first 변수에는 꼴등이 들어갑니다.
그래서 last변수에는 malloc 이 실행될 때 마다(즉 새로운 사람이 추가될 때 마다) 값이 바뀌어야 합니다.
*/