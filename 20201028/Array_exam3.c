#include <stdio.h>
double SumofData(double * pD); //�Լ�����
int main(void)
{
	double data[5] = {3.4, 5.6, 7.2, 6.3};
	double res = 0;
	// �迭�� ��°�� ������ �� ����. 
	res = SumofData(data); // �Լ� ȣ�� ==> data �迭�� ��� ����� ���� ����ؼ� ����

	printf("res : %.3lf \n", res); //data�迭�� ��� ����� ���� ���
	return 0;
}

double SumofData(double * pD) //����
{
	int idx = 0;
	double Sumresult = 0;

	for(idx =0;idx<4;idx++)
	{
		Sumresult += pD[idx];
	}

	return Sumresult;

}
