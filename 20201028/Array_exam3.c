#include <stdio.h>
double SumofData(double * pD); //함수원형
int main(void)
{
	double data[5] = {3.4, 5.6, 7.2, 6.3};
	double res = 0;
	// 배열은 통째로 복사할 수 없다. 
	res = SumofData(data); // 함수 호출 ==> data 배열의 모든 요소의 합을 계산해서 리턴

	printf("res : %.3lf \n", res); //data배열의 모든 요소의 합을 출력
	return 0;
}

double SumofData(double * pD) //정의
{
	int idx = 0;
	double Sumresult = 0;

	for(idx =0;idx<4;idx++)
	{
		Sumresult += pD[idx];
	}

	return Sumresult;

}
