#include <stdio.h>
void Displaymenu(char** pS);
int main(void)
{

	char* pSt[3] = {"1.insert","2.Display","3.Exit"};

	

	Displaymenu(pSt);

	return 0;

}

void Displaymenu(char** pS)
{
	int num;
	printf("���ڸ� �Է����ּ��� : ");
	scanf_s("%d", &num);

	printf("%s \n", pS[num]);

	int idx = 0;
	for (idx=0; idx<3; idx++)
		printf("%s  \n", pS[idx]);
	printf("%c \n", pS[1][2]);

	

}
// ������ �迭�� �������ڴ� �����������̴�. 
// �迭 int * pd = arr �� �� ���� ����ų �� pd[0] == arr[0] �̶� �����ϴ�.