#include <stdio.h>
#include <stdlib.h> 
int* InsertData(int* pNum);
int main(void)
{
	int* pSt = NULL; //��������
	int cnt = 0;
	int idx = 0;
	pSt = InsertData(&cnt); //�Է¹ޱ� ���Ѵ� ũ�⸸ŭ ���� ������ ��� //pSt �� ���� �޸𸮸� ����Ų��. 
	
	for(idx=0; idx<cnt; idx++)
	{
		printf("%d \n", pSt[idx]);
	}
	
	free(pSt);

	return 0;
}
int* InsertData(int* pNum)

{
	int num = 0;
	int* pNew;
	int idx = 0;
	printf("��� ���� ������ ������ ���մϱ�? :");
	scanf_s("%d", &num);

	*pNum = num;

    pNew = (int*) malloc( sizeof(int) * num ); //Ȯ���� ���� �޸� ���� �ּ�

	for(idx=0; idx<num; idx++)
	{
		printf("���� ������ �Է� : ");
		scanf_s("%d", &pNew[idx]);

	}

	return pNew; //c�� ������ ���ϰ��� �ϳ���.
}

//pNew �� �������� - stack ������ �ö��ִ�.
//main�Լ� �ȿ��� ����� ���� ���������� �׷��� pSt�� ����������.