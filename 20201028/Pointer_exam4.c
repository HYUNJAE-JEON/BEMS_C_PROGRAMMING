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

	printf("pD size : %d \n", sizeof(pD)); //�����ͺ��� �޸� ũ�� ��ȯ
	printf("pT size : %d \n", sizeof(pT));
	printf("pdb size : %d \n", sizeof(pdb));

	// *pD �� ����Ʈ ����? 1����Ʈ
	// *pT �� ����Ʈ ����? 4����Ʈ
	// *pdb �� ����Ʈ ����? 8����Ʈ
	// �޸� ���� �� �� ����Ʈ�� ���������� ������ ���� �ڷ����� ����

	return 0;
}