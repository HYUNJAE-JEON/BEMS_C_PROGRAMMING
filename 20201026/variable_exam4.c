#include <stdio.h>
int main(void)  
{
	int kor = 0; //���� ����
	int eng = 0; //���� ����
	int math = 0; //���� ����
	int total = 0; //���� ���� ����
    double avg = 0.0; // ��� ���� ����
#if(1) //���Ǻ� ������ 0 �� �����̱� ������ 0 �ȿ� �ִ� �� ������ �ȵȴ�. 
	printf("input kor_score: ");
	scanf_s("%d", &kor);
	printf("input eng_score: ");
	scanf_s("%d", &eng);
	printf("input math_score: ");
	scanf_s("%d", &math);

	total = kor + eng + math;
	avg = (double)total / 3; // ��������ȯ
	//(�ڷ���)���� : ���� ����ȯ . cast ������ --> casting
	printf("avg : %.3lf \n", avg);

#else
	total = 67.95;
	printf("total : %d \n", total); //�̷��� total �� ��쿡�� int�ε� �Ҽ����� ������� ������
	//����ȯ�� �Ͼ�� �߶������. 
#endif
	//���� ,���� , ���� 3������ ������ �Է� ����
	
	//3������ ������ ��� ���ؼ� total ������ ����
	
	// total ������ �̿��ؼ� ����� ����ؼ� avg ������ ���� �� ���

	return 0;

}