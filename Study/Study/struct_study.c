#include <stdio.h>
#include <Windows.h>

//Animal ����ü �����
struct Animal {
	//����ü �������� �ʱ�ȭ �� �� ����.
	char name[20];
	int age;
	char feed[20];
};

int main() {

	struct Animal dog;
	printf("���� �̸��� �Է��ϼ���\n");
	scanf_s("%s", dog.name, sizeof(dog.name));

	printf("%s ���̸� �Է��ϼ���\n", dog.name);
	scanf_s("%d", &dog.age);

	printf("%s ���̸� �Է��ϼ���\n", dog.name);
	scanf_s("%s", dog.feed, sizeof(dog.feed));

	system("cls");

	printf("���� �̸� : %s\n", dog.name);
	printf("%s ���� : %d��\n", dog.name, dog.age);
	printf("%s ���� : %s\n", dog.name, dog.feed);

	return 0;
}

//	����ü(Ÿ��)
//		����		: �ݺ��Ǵ� ������ ���ϰ� �����ϱ� ����
//		�Լ�		: �ݺ��Ǵ� ������� ���ϰ� �����ϱ� ����
//		����ü		: �ݺ��Ǵ� �������� ���ϰ� �����ϱ� ����
//					  (�Լ��� C++, JAVA���� ���� ���� : Ŭ����)
//
//	������ ã��
//
//	����ü ����
//	struct ����ü�̸� {
//		�ڷ��� ���������;
//		...
//	};
//
//	����ü ���
//		. : ���� ������
//		A.B : A�ȿ� B
//
//	(1)
//	struct ����ü�̸� ������;
//	������.��������� = ��;
//
//	(2) (�����)
//	struct ����ü�̸� ������ = { .��������� = ��....... }
//
//	(3) (�Ϲ���)
//	struct ����ü�̸� ������ = { ��...... }