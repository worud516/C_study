#include <stdio.h>
#include <string.h>
/*
	�л� ����ü �����
	�л���ȣ(�Է�X, cnt�� ����ؼ� �ڵ� ����), �̸�, ����, ����(3ĭ �迭)
	�� ����, ��� ����
	2��
	�� �ݿ� 3�� �ִ�.
	2���� ����ü �迭
	�ݺ� ���, ����
	1�г� ���, ����
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
		printf("%d��\n", i + 1);
		for (int j = 0; j < COL_SIZE; j++) {
			cnt++;
			arStd[i][j].num = cnt;
			printf("1�г� %d�� %d�� �л� �̸� : ", i + 1, arStd[i][j].num);
			scanf_s("%s", arStd[i][j].name, sizeof(arStd[i][j].name));

			printf("%s �л� ���� : ", arStd[i][j].name);
			scanf_s("%s", arStd[i][j].gender, sizeof(arStd[i][j].gender));

			printf("%s �л��� ���� ���� ���� ������ ���ʷ� �Է��ϼ���\n", arStd[i][j].name);
			for (int k = 0; k < s_length; k++) {
				scanf_s("%d", arStd[i][j].score + k);

				ban_sum[i] += arStd[i][j].score[k];
				sum += arStd[i][j].score[k];
			}
		}
		ban_avg[i] = (double)ban_sum[i] / COL_SIZE;
		printf("%d�� �� ���� : %d�� ��� ���� : %.2lf��\n", i + 1, ban_sum[i], ban_avg[i]);
		printf("\n");

	}

	avg = sum / (ROW_SIZE * COL_SIZE);

	for (int i = 0; i < ROW_SIZE; i++) {
		for (int j = 0; j < COL_SIZE; j++) {
			printf("1�г� %d�� %d��. %s %s\n", i + 1, arStd[i][j].num, arStd[i][j].name, arStd[i][j].gender);
			printf("������ : ");
			for (int k = 0; k < s_length; k++) {
				printf("%d�� ", arStd[i][j].score[k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	printf("1�г� �� ���� : %d�� ��� ���� : %.2lf\n", sum, avg);
	printf("\n");
}