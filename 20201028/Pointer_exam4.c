#include <stdio.h>

int main(void)
{
	int data = 0x12345678;
	char* pD = (char*)&(data)+3;
	int * pT = &data;
	double db = 5.9;
	double * pdb = &db;


	printf("data : 0x%x \n", data);

	printf("data : 0x%x \n", *pD);

	printf("pD size : %d \n", sizeof(pD)); //포인터변수 메모리 크기 변환
	printf("pT size : %d \n", sizeof(pT));
	printf("pdb size : %d \n", sizeof(pdb));

	// *pD 몇 바이트 접근? 1바이트
	// *pT 몇 바이트 접근? 4바이트
	// *pdb 몇 바이트 접근? 8바이트
	// 메모리 참조 시 몇 바이트를 접근할지는 포인터 변수 자료형이 결정

	return 0;
}