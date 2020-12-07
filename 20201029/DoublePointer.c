#include <stdio.h>
void ReverseeData(int** ppT, int** ppV);
int main(void)
{

	int temp = 5;
	int val = 7;
	int* pT = &temp;
	int* pV = &val;
	printf("temp : %d, val : %d \n", temp, val);
	printf("*pT : %d, *pV : %d \n", *pT, *pV);

	//int** ppT = &pT;
	//int** ppV = &pV;

	ReverseeData(&pT, &pV);

	printf("temp : %d, val : %d \n", temp, val);
	printf("*pT : %d, *pV : %d \n", *pT, *pV);

	return 0;
}

void ReverseeData(int** ppT, int** ppV)
{
	int* num;
	num = *ppT;
	*ppT = *ppV;
	*ppV = num;



}
// ���� �����ʹ� �̱� �������� �����ּҸ� �����ϴ� �뵵 
// ���� �����ͷ� �����͸� ã���� �ϸ� * �� �� �� �Է��ؾ��Ѵ�.
// pD ; == 0x800 = &pT
// *pD ; == 0x700 == pT == &temp
// **pD ; == 5 == *pT == temp
