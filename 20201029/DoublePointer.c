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
// 이중 포인터는 싱글 포인터의 시작주소를 저장하는 용도 
// 이중 포인터로 데이터를 찾고자 하면 * 를 두 번 입력해야한다.
// pD ; == 0x800 = &pT
// *pD ; == 0x700 == pT == &temp
// **pD ; == 5 == *pT == temp
