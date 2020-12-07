#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char DeviceName[30]; //��ġ�� 30
	char controlMethod[30]; //������ 30
	double volume; //��� 8

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
	printf("��� : %s \n", pD->DeviceName);
	printf("��� : %s \n", pD->controlMethod);
	printf("��� : %lf \n", pD->volume);
}

DEMMAND* InsertData(void)
{
	DEMMAND* pNew;

	pNew = (DEMMAND*)malloc(sizeof(DEMMAND));
	printf("��ġ�� �Է� : ");
	scanf_s("%s", pNew->DeviceName, 30);
	printf("������ �Է� : ");
	scanf_s("%s", pNew->controlMethod, 30);
	printf("���� ũ�� �Է� : ");
	scanf_s("%lf", &pNew->volume);

	return pNew;



}
