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
	SumofData(&db1, &db2, &res);//db1 ������ db2 ������ �������� ���� res ������ ������Ѷ�. 

	printf("res : %.3lf \n", res);


	return 0;
}
void SumofData(double* pdb1, double* pdb2, double* pres)
{
	*pres = *pdb1 + *pdb2;

}

//�ش� ������ call_by_value + call_by_pointer(address)�� ��ģ ���̴�. 
// void SumofData(double mdb1, double mdb2, double* pres)
// *pR = mdb1 + mdb2;