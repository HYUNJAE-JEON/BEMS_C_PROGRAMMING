#include <stdio.h>
void SumofData(double* pdb1, double* pdb2, double* pres);
int main(void)
{
	double db1 = 8.3;
	double db2 = 6.2;
	double res = 0;

	/*double * pdb1 = &db1;
	double * pdb2 = &db2;
	double * pres = &res;
	*/
	SumofData(&db1, &db2, &res);//db1 변수와 db2 변수의 데이터의 합을 res 변수에 저장시켜라. 

	printf("res : %.3lf \n", res);


	return 0;
}
void SumofData(double* pdb1, double* pdb2, double* pres)
{
	*pres = *pdb1 + *pdb2;

}

//해당 문제는 call_by_value + call_by_pointer(address)를 합친 것이다. 
// void SumofData(double mdb1, double mdb2, double* pres)
// *pR = mdb1 + mdb2;