#include <stdio.h>
int SumofData(int** pA);
int main(void)
{

	int arr[5] = {3,6,7};
	int data[5] = {8,9,2,3};
	int buf[5] = {2,6};
	int* ArrData[3] = {arr, data, buf}; //�����͹迭 ����� ���� �ʱ�ȭ
	// ArrData[0] ----> arr�迭
	// ArrData[1] ----> data�迭

	//int** pA = ArrData

	int total = 0;

	total = SumofData(ArrData); //�����͹迭�� �����ϴ� ��� ���� �������� ���� ����

	printf("total : %d \n", total);

	return 0;
}
int SumofData(int** pA)
{
	int idx = 0;
	int sum = 0;
	for(idx = 0; idx<3; idx++)
	{
		int idxd = 0;
		for(idxd = 0; idxd<5; idxd++)
		{
			sum += pA[idx][idxd]; // *(pA[idx] + idxd)
		}
	}
	return sum;
}
