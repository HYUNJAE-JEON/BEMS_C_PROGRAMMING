#include <stdio.h>
void InputString(char (*pS)[50]);
void OutputString(char (*pS)[50]);
int main(void)
{

	char Src[3][50];

	InputString(Src); // 3���� ���ڿ��� �Է� ó��
	OutputString(Src); // �Էµ� ���ڿ��� ��� ó��

	return 0;
}
void InputString(char (*pS)[50]) // ���̰� 50�� char�� 2���� �迭�� ����Ű�� �迭 ������
{
	int idx = 0;
	for(idx = 0; idx<3; idx++)
	{	
		printf("���ڿ��� �Է����ּ��� : ");
		scanf_s("%s", pS[idx], 50);
	}
}
void OutputString(char (*pS)[50])
{
	int idx = 0;
	for(idx = 0; idx<3; idx++)
	{	
		printf("%s \n",pS[idx]);
		
	}

}
