#include <stdio.h>

double Function_exam(double dm); //�Լ��������� 
int main(void)  
{
	double data = 23.5;
	printf("data : %.1lf \n", data); //23.5
	data = Function_exam(data); //�Լ� ȣ�� (��������)
	printf("data : %.1lf \n", data); //33.5
	return 0;
}

// �������ڿ� �Ű��������� ������ �����Ǿ��ִ�. //�Լ� ����
//����Ÿ�� �Լ���(�Ű����� ����)
// int dm = data;
double Function_exam(double dm)
{
	return dm + 10;
}
