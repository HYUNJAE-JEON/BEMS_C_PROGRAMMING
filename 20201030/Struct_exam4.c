#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char DeviceName[30]; //장치명 30
	char controlMethod[30]; //제어방법 30
	double volume; //제어값 8

}DEMMAND;

DEMMAND* InsertData(void);
void DisplayData(DEMMAND* pD);
DEMMAND* InsertData(void);
int main(void)
{
	DEMMAND* pSt = NULL;
	pSt = InsertData();
	DisplayData(pSt);
	free(pSt);
	return 0;

}

void DisplayData(DEMMAND* pD)
{
	printf("출력 : %s \n", pD->DeviceName);
	printf("출력 : %s \n", pD->controlMethod);
	printf("출력 : %lf \n", pD->volume);
}

DEMMAND* InsertData(void)
{
	DEMMAND* pNew;

	pNew = (DEMMAND*)malloc(sizeof(DEMMAND));
	printf("장치명 입력 : ");
	scanf_s("%s", pNew->DeviceName, 30);
	printf("제어방법 입력 : ");
	scanf_s("%s", pNew->controlMethod, 30);
	printf("제어 크기 입력 : ");
	scanf_s("%lf", &pNew->volume);

	return pNew;



}
