#include <stdio.h>
int main(void)  
{
	double data = 0.0;

	//ǥ�� ���(�����)�Լ�
	printf("data : %.3lf \n", data);
	printf("data input : ");
	//ǥ�� �Է�(Ű����) �Լ�
	scanf_s("%lf", &data);

	printf("data : %.3lf \n", data);
	return 0;
	//ó���� �ڷ��� ������ �� double�� ���������� ���Ĺ��ڸ� lf�� ����ϰ�
	//�ڷ����� float �̸� ���Ĺ��ڸ� f �� ����. 
}