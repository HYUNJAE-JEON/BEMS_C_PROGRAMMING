#include <stdio.h>
#include <stdlib.h> 
char* InsertString(void);
void DisplayString(char* pD);
int main(void)
{
	char* pSt = NULL;
	pSt = InsertString();
	DisplayString(pSt);
	free(pSt);
	return 0;
}
char* InsertString(void)
{

	
	char* pNew;
	char num[100];
	int len = 0;
	printf("���ڿ��� �Է����ּ��� : ");
	scanf_s("%s", num, 100); //�迭�� ���ڿ��� �Է�

	
	while(num[len] != '\0')
	{
		len++;
	}

	printf("len : %d \n", len);
 
	pNew = (char*) malloc( sizeof(char) * len + 1); //�ι��� ������ 100���ڸ� ������ �� ����. //+1�� �ؾ��� null���ڱ��� Ȯ���� ������ ũ�Ⱑ �ȴ�. //���ڿ��� ���ڿ� ���̸�ŭ �޸�Ȯ���ؾ� �Ѵ�.
	
	len = 0;
	while(num[len] != '\0')
	{
		pNew[len] = num[len];
		len++;
	}
	pNew[len] = '\0';

	//4�ܰ� : �迭�� �Էµ� ���ڿ��� ���� �޸𸮷� ����


	return pNew;
	//5�ܰ� ���� �޸� ����

}

void DisplayString(char* pD) // pD�� pSt�� �����ϴ� ���̴�. //pD�� heap �޸𸮸� ����Ų��.
{

	printf("��� : %s \n", pD);
	printf("��� : %c \n", *pD); // pD[0]�� ��ġ

}
