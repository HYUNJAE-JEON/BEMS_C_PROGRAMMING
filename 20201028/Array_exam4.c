#include <stdio.h>
#define MAXLEN 8
void InputData(int * pa);
void OutputData(int *pa);
int main(void)
{

	int arr[MAXLEN];

	InputData(arr); //arr �迭�� 5���� ������ �Է� ����

	OutputData(arr); //arr �迭�� �Էµ� 5���� ���� �����͸� ���

	return 0;

}

void InputData(int * pa)
{
	int idx = 0;
	int num = 0;
	for(idx = 0; idx<MAXLEN; idx++)
	{
		printf("������ �Է����ּ���: \n");
		scanf_s("%d",&num);
		pa[idx] = num;
	}
}
void OutputData(int *pa)
{
	int idx = 0;
	for(idx = 0; idx<MAXLEN; idx++)
	{
		printf("arr[%d] : %d \n",idx,pa[idx]);
	}
}
//�Լ� �ȿ��� ����Ʈ������ ������� 4BYTE �� ���Ǵϰ� �Լ��� �������ڷ� �Ѱ�����Ѵ�.