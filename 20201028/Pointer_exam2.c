#include <stdio.h>
void ModifyData(double* pT);
int main(void)
{
	double data = 5.8;
	// double *pT = &data;
	printf("data : %.3lf \n", data); //5.8
	ModifyData(&data); //함수 호출
	printf("data : %.3lf \n", data); //2.3
	return 0;

}

void ModifyData(double* pT)
{

	*pT = 2.3;	
}
