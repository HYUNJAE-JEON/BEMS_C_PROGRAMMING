#include <stdio.h>
// ����� ���� �Լ������� printf�� scanf�� ���ؼ� �Լ����������� �ʿ��ϴ�. 
// c�ϰ� h ������ ������ ȣ���� ���ɤ���.
//void�� �ǹ̴� �����Լ� ���� �Ű������� ����.
//�������ھ���, ���ϰ��� ����.

void Display(void) //���� //������ ���� ���� ������ ���� ����.
{
	printf("C Programming \n");
}


int InputData(void) // ������ ���� ���µ� ������ ���� �ִ� �Լ�
{
	int num = 0;
	printf("���� �ϳ��� �Է��ϼ���: ");
	scanf_s("%d", &num);
	return num;
}

void OutputData(int m_r) //�������� �ִµ� ���� �� ����.
{
	printf("result : %d \n", m_r + 30);
}