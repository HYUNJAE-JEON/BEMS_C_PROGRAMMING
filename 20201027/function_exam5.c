#include <stdio.h>
#define PI 3.14 // ��ũ�� ���
double CircleArea(void);
int main(void)  
{

	double Area = 0.0;

	Area = CircleArea(); //�������� �Է��ϰ� ���� ���̸� ����ؼ� ����

	printf("Area : %.3lf \n", Area);

	return 0;
}

double CircleArea(void)
{
	double result = 0;
	double radius = 0;
	printf("�������� �Է����ּ���: ");
	scanf_s("%lf",&radius);
	result = PI * radius * radius;
	return result;

}
