#include <stdio.h>

int main(void)

{	
	int kor = 0; //���� ����
	int eng = 0; //���� ����
	int math = 0; //���� ����
	int total = 0; //���� ���� ����
    double avg = 0.0; // ��� ���� ����

	printf("input kor_score: ");
	scanf_s("%d", &kor);
	printf("input eng_score: ");
	scanf_s("%d", &eng);
	printf("input math_score: ");
	scanf_s("%d", &math);

	total = kor + eng + math;
	avg = (double)total / 3; // ��������ȯ
	//(�ڷ���)���� : ���� ����ȯ . cast ������ --> casting
	printf("total : %d \n", total);
	printf("avg : %.3lf \n", avg);
	
	if (avg >= 90)
	{
		printf("������ A �Դϴ�. \n");
	}
	else if ((avg >= 80) && (avg < 90))
	{
		printf("������ B �Դϴ�. \n");
	}
	else if ((avg >= 70) && (avg < 80))
	{
		printf("������ C �Դϴ�. \n");
	}
	else
	{
		printf("�� �� ����ϼ��� !! \n");
	}
	// ����, ����, ���� 3������ ������ �Է� ����
	// ������ ��� ���
	
	


	
	
	// ����� 90�� �̻��̸� 'A' ���� ���
	// ����� 80�� �̻��̰� 90�� �����̸� 'B' ���� ���
	// ����� 70�� �̻��̰� 80�� �̸��̸� 'C' ���� ���
	// ����� 70�� �����̸� '�� �� ��� �ϼ���!!" ���






	return 0;

}