#include <stdio.h>
double SumoffArr(double (*pAr)[3]);
int main(void)
{

	double arrdb[3][3] = {
		{1.2, 3.4, 5.6},
		{5.6, 7.3, 8.9},
		{3.5, 3.7, 3.9}
	};
	double sumdata = 0;

	sumdata = SumoffArr(arrdb); // 2차원 배열의 모든 요소의 합을 계산해서 리턴

	printf("sumdata : %.3lf \n", sumdata);

	return 0;
}
double SumoffArr(double (*pAr)[3])
{
	int idx = 0;
	double res = 0;
	for(idx=0; idx<3; idx++)
	{
		int idxd = 0;
		for(idxd=0; idxd<3; idxd++)
		{
			res += pAr[idx][idxd];
		}
	}
	return res;
}