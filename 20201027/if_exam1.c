#include <stdio.h>

int main(void)


{
	int val = 50;
/* �ܵ� if ���� */
	if(val < 60) //if /���ǹ��� ���ϰ�� �ڵ���� ����, ������ ��� �������� ����.
	{
		// ���౸��
		printf("val : %d \n", val); //�� ������ ���� �߰�ȣ ������ �� �ִ�. 
		// ���౸���� �� ������ �� �߰�ȣ ���� ����

	//if else ����
		//�� ���� �ϳ� ������ ������ �� ���
	if(val < 60)
	{
		// ������ ���� ��� ������ ����
		printf("if elses True vel : %d \n", val);
	}
	{
		//������ ������ ��� ������ ����
		printf("if elses False vel : %d \n", val);
	}
	return 0;
}
