#include <stdio.h>
#include <string.h>
/*
	학생 구조체 만들기
	학생번호(입력X, cnt를 사용해서 자동 증가), 이름, 성별, 점수(3칸 배열)
	총 점수, 평균 점수
	2반
	각 반에 3명씩 있다.
	2차원 구조체 배열
	반별 평균, 총합
	1학년 평균, 총합
*/

#define ROW_SIZE 2
#define COL_SIZE 3

typedef struct Std {
	int num;
	char name[20];
	char gender[5];
	int score[3];

}S;


void main() {
	S arStd[ROW_SIZE][COL_SIZE];
	int cnt = 0;
	int s_length = sizeof(arStd[0][0].score) / sizeof(int);
	int ban_sum[ROW_SIZE] = { 0, };
	double ban_avg[ROW_SIZE] = { 0.0, };

	int sum = 0;
	double avg = 0.0;


	for (int i = 0; i < ROW_SIZE; i++) {
		cnt = 0;
		printf("%d반\n", i + 1);
		for (int j = 0; j < COL_SIZE; j++) {
			cnt++;
			arStd[i][j].num = cnt;
			printf("1학년 %d반 %d번 학생 이름 : ", i + 1, arStd[i][j].num);
			scanf_s("%s", arStd[i][j].name, sizeof(arStd[i][j].name));

			printf("%s 학생 성별 : ", arStd[i][j].name);
			scanf_s("%s", arStd[i][j].gender, sizeof(arStd[i][j].gender));

			printf("%s 학생의 국어 영어 수학 점수를 차례로 입력하세요\n", arStd[i][j].name);
			for (int k = 0; k < s_length; k++) {
				scanf_s("%d", arStd[i][j].score + k);

				ban_sum[i] += arStd[i][j].score[k];
				sum += arStd[i][j].score[k];
			}
		}
		ban_avg[i] = (double)ban_sum[i] / COL_SIZE;
		printf("%d반 총 정수 : %d점 평균 점수 : %.2lf점\n", i + 1, ban_sum[i], ban_avg[i]);
		printf("\n");

	}

	avg = sum / (ROW_SIZE * COL_SIZE);

	for (int i = 0; i < ROW_SIZE; i++) {
		for (int j = 0; j < COL_SIZE; j++) {
			printf("1학년 %d반 %d번. %s %s\n", i + 1, arStd[i][j].num, arStd[i][j].name, arStd[i][j].gender);
			printf("국영수 : ");
			for (int k = 0; k < s_length; k++) {
				printf("%d점 ", arStd[i][j].score[k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	printf("1학년 총 점수 : %d점 평균 점수 : %.2lf\n", sum, avg);
	printf("\n");
}