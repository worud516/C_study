//	동적할당 (dynamic allocation)
//	malloc()
// 자료형* 포인터명 = (자료형*)malloc(sizeof(자료형)*크기);
// 자료형* 포인터명 = (자료형*)malloc(크기);

// 동적할당 초기화 (clear allocation)
//	calloc()
//	자료형* 포인터명 = (자료형*)calloc(크기, sizeof(자료형));

// 동적할당 크기변경(resize allocation)
//	realloc()
//	자료형* 포인터명1 = (자료형*)malloc(sizeof(자료형)*크기);
//	자료형* 포인터명2 = (자료형*)realloc(포인터명1, sizeof(자료형)*변경할크기);
// 그 전에 있던 값은 유지 되면서 늘어남

// 동적할당 메모리 해제(중요)
// free(포인터명);
// 메모리를 해제하지 않으면 사라지지 않고 남아 있기 때문에 꼭 free함수로 메로리 해제를 해줘야 한다.

//	동적배열 사용
//	포인터명[index]
//	*(포인터명 + i)



#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int* mArr = 0;

	mArr = (int*)malloc(sizeof(int) * 5);
	mArr = (int*)calloc(5, sizeof(int));
	mArr = (int*)realloc(mArr, sizeof(int) * 10);
	mArr = (int*)calloc(10, sizeof(int));

	for (int i = 0; i < 10; i++) {
		mArr[i] = i + 1;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d ", mArr[i]);
	}

	free(mArr);
	return 0;
}