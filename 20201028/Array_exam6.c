#include <stdio.h>
void InputString(char *pS);
void OutputString(char *pD);
int main(void)
{
	char Src[30];

	//char *pS = Src;

	InputString(Src); //�Լ� ȣ�� : Src �迭�� ������ ���ڿ��� �Է�

	OutputString(Src); //�Լ� ȣ�� : Src �迭�� �Էµ� ���ڿ��� ���



	return 0;
}

void InputString(char *pS)
{
	printf("������ ���ڿ��� �Է��ϼ���: ");
	scanf_s("%s",pS, 30); //�������� ���� �� ������ �������ִ� ������ �װ� �̻����δ� �������� ��� �ϤѤ�  ���̴�.
	gets_s(pS,30); //�����̽��� �ĵ� �Ѿ�� ���͸� �ľ߸� �Է��� �ȴ�. 

}

void OutputString(char *pD)
{
	printf("Src : %s \n", pD);

}