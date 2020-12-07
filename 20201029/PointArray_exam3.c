#include <stdio.h>
int SumofData(int** pA);
int main(void)
{

	int arr[5] = {3,6,7};
	int data[5] = {8,9,2,3};
	int buf[5] = {2,6};
	int* ArrData[3] = {arr, data, buf}; //포인터배열 선언과 동시 초기화
	// ArrData[0] ----> arr배열
	// ArrData[1] ----> data배열

	//int** pA = ArrData

	int total = 0;

	total = SumofData(ArrData); //포인터배열이 참조하는 모든 정수 데이터의 합을 리턴

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
